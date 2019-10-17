/*
 * File:   phase_control.c
 * Author: hectorcruz
 *
 * Created on August 13, 2019, 1:29 PM
 */


#include "xc.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "phase_control.h"
#include "mcc_generated_files/tmr1.h"
#include "mcc_generated_files/pin_manager.h"


#define COUNTS_PER_HALF_CYCLE  4096
#define MOSFET 1

typedef struct _PHASE_OBJ_STRUCT
{ 
    volatile uint8_t     negativeDutyCycle;
    volatile uint16_t    phase_reference;  
    volatile uint16_t    accumulate_counts;  
    
} PHASE_OBJ;

static PHASE_OBJ phase_obj;
unsigned int count = 0;


void phaseControl_handler(void){
    LED10_Toggle();
    count ++;
    phase_obj.accumulate_counts = TMR1_SoftwareCounterGet();
    if(phase_obj.phase_reference <10) phase_obj.phase_reference = 10;
    //if(phase_obj.accumulate_counts == phase_obj.phase_reference ){
    if(count == phase_obj.phase_reference ){
        
        #if MOSFET
                TRIAC_TRIGGER_SetHigh();
        #else
                TRIAC_TRIGGER_SetLow();
        #endif    
    }
    //if(phase_obj.accumulate_counts >= 4000 ){       /*El 4055 es arbitrario,modificar si es necesario*/
    if(count >= 3500 ){       
        #if MOSFET
                TRIAC_TRIGGER_SetLow();
        #else
                TRIAC_TRIGGER_SetHigh();
        #endif

        TMR1_Stop();
        TMR1_SoftwareCounterClear();
        count = 0;
        
      
    }
 
}

void TMR1_Handler(void){
    
    phaseControl_handler();
}
void phaseControl_SetReference(uint16_t phaseReference){

    phase_obj.phase_reference = 3500 - phaseReference;      /*Es necesario invertir el valor recibido por el PID*/
    //phase_obj.phase_reference = phaseReference;
}

void phaseControl_Initialize(void){

    phase_obj.accumulate_counts = 0;
    phase_obj.negativeDutyCycle = 0;
    phase_obj.phase_reference   = 3000;
    
    
    /* Es necesario asignar una funcion Handler para el TMR1
     * En caso de no ser llamada esta funcion se asignara por default TMR1_Call() (tmr1.c)  
     */
    TMR1_SetInterruptHandler(&TMR1_Handler);
}




