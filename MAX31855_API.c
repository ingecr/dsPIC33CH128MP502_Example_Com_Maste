/*
 * File:   MAX31855_API.c
 * Author: hectorcruz
 *
 * Created on August 13, 2019, 9:32 AM
 */


#include "xc.h"

#include "MAX31855_API.h"
#include "mcc_generated_files/spi1.h"

#define MAX31855_BYTES 4

void get_MAX31855_temperatures(int16_t* thermocoupleTemp, int16_t* internalTemp){

    int16_t MAX31855_dataBuffer[MAX31855_BYTES/2];
    int16_t dummyData = 0x0295;
    //SS1_ON();
    _LATD3 = 0;
    int i;
    for(i = 0; i < MAX31855_BYTES/2; i++){
        MAX31855_dataBuffer[i] = SPI1_Exchange16bit(dummyData);
    
    }
    //SS1_OFF();
    _LATD3 = 1;
    if((MAX31855_dataBuffer[0] & (0b1000000000000000)) > 1)
    {
        *((int16_t*)thermocoupleTemp)   = ((!MAX31855_dataBuffer[0]) >> 5)*(-1);
        *((int16_t*)internalTemp  )     = ((!MAX31855_dataBuffer[1]) >> 9)*(-1);
    }
    else
    {
        *((int16_t*)thermocoupleTemp)   = MAX31855_dataBuffer[0] >> 5;
        *((int16_t*)internalTemp  )     = MAX31855_dataBuffer[1] >> 9;
    }
    
    

}