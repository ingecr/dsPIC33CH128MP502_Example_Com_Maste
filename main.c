/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.135.0
        Device            :  dsPIC33CH128MP508
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.36b
        MPLAB 	          :  MPLAB X v5.20
*/

/*
    (c) 2019 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/*
  Section: Included Files
*/

#include "mcc_generated_files/mcc.h"
#include "lcd.h"
#include "MAX31855_API.h"
#include "Thermo5.h"
#include "PID.h"
#include "phase_control.h"
#include "mcc_generated_files/sccp1_tmr.h"
#include "mcc_generated_files/sccp2_tmr.h"


 
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    LCD_Initialize();
    
    uint16_t temp_thermopar =   0;
    uint16_t temp_internal  =   0;
    double internal_temp  =   0;
    double temp_1         =   0;
    double temp_2         =   0;
    double temp_3         =   0;
    
    int8_t reference    = 50;
    
    
    //Program and enable slave
    SLAVE1_Program();
    SLAVE1_Start();
 
    ProtocolA_DATA dataReceive;
 
    dataReceive.ProtocolA[0] = 0;
 
    
    printf("\fComunication Control \r\n");
    
 

    
    while (1)
    {
            if(SLAVE1_IsInterruptRequested()){
            SLAVE1_InterruptRequestAcknowledge();
            while(SLAVE1_IsInterruptRequested());
            
            SLAVE1_ProtocolARead((ProtocolA_DATA*)&dataReceive);
            
            write_Data_Memory(0,dataReceive.ProtocolA[0]);
            reference = dataReceive.ProtocolA[0];
            if (reference != 50) LED7_SetHigh();
            else LED7_SetLow();
            
            SLAVE1_InterruptRequestAcknowledgeComplete();  
                    
            get_MAX31855_temperatures(&temp_thermopar, &temp_internal);
            
            internal_temp =   Thermo5_ReadTemperature(INTERNAL_DIODE);
            temp_1        =   Thermo5_ReadTemperature(DIODE_1); 
            temp_2        =   Thermo5_ReadTemperature(DIODE_2);
            temp_3        =   Thermo5_ReadTemperature(DIODE_3);
            
            write_Data_Memory(0,(uint8_t)reference);
            write_Data_Memory(1,(uint8_t)temp_thermopar);
            write_Data_Memory(2,(uint8_t)internal_temp);
            write_Data_Memory(3,(uint8_t)temp_1);
            write_Data_Memory(4,(uint8_t)temp_2);
            write_Data_Memory(5,(uint8_t)temp_3);
            
            //uint16_t dummy_t = PID((int8_t*)&temp_thermopar,&reference);
            //phaseControl_SetReference(dummy_t);
            //phaseControl_SetReference(reference_count);
            
            }
            

        
    }
}
/**
 End of File
*/

