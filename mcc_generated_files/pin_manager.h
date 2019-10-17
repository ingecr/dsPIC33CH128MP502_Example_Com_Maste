/**
  PIN MANAGER Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for PIN MANAGER.
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

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>

/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RC2, high using LATC2.

  @Description
    Sets the GPIO pin, RC2, high using LATC2.

  @Preconditions
    The RC2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC2 high (1)
    SCK1_SetHigh();
    </code>

*/
#define SCK1_SetHigh()          _LATC2 = 1
/**
  @Summary
    Sets the GPIO pin, RC2, low using LATC2.

  @Description
    Sets the GPIO pin, RC2, low using LATC2.

  @Preconditions
    The RC2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC2 low (0)
    SCK1_SetLow();
    </code>

*/
#define SCK1_SetLow()           _LATC2 = 0
/**
  @Summary
    Toggles the GPIO pin, RC2, using LATC2.

  @Description
    Toggles the GPIO pin, RC2, using LATC2.

  @Preconditions
    The RC2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC2
    SCK1_Toggle();
    </code>

*/
#define SCK1_Toggle()           _LATC2 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RC2.

  @Description
    Reads the value of the GPIO pin, RC2.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC2
    postValue = SCK1_GetValue();
    </code>

*/
#define SCK1_GetValue()         _RC2
/**
  @Summary
    Configures the GPIO pin, RC2, as an input.

  @Description
    Configures the GPIO pin, RC2, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC2 as an input
    SCK1_SetDigitalInput();
    </code>

*/
#define SCK1_SetDigitalInput()  _TRISC2 = 1
/**
  @Summary
    Configures the GPIO pin, RC2, as an output.

  @Description
    Configures the GPIO pin, RC2, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC2 as an output
    SCK1_SetDigitalOutput();
    </code>

*/
#define SCK1_SetDigitalOutput() _TRISC2 = 0
/**
  @Summary
    Sets the GPIO pin, RD13, high using LATD13.

  @Description
    Sets the GPIO pin, RD13, high using LATD13.

  @Preconditions
    The RD13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD13 high (1)
    TRIAC_TRIGGER_SetHigh();
    </code>

*/
#define TRIAC_TRIGGER_SetHigh()          _LATD13 = 1
/**
  @Summary
    Sets the GPIO pin, RD13, low using LATD13.

  @Description
    Sets the GPIO pin, RD13, low using LATD13.

  @Preconditions
    The RD13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD13 low (0)
    TRIAC_TRIGGER_SetLow();
    </code>

*/
#define TRIAC_TRIGGER_SetLow()           _LATD13 = 0
/**
  @Summary
    Toggles the GPIO pin, RD13, using LATD13.

  @Description
    Toggles the GPIO pin, RD13, using LATD13.

  @Preconditions
    The RD13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD13
    TRIAC_TRIGGER_Toggle();
    </code>

*/
#define TRIAC_TRIGGER_Toggle()           _LATD13 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RD13.

  @Description
    Reads the value of the GPIO pin, RD13.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD13
    postValue = TRIAC_TRIGGER_GetValue();
    </code>

*/
#define TRIAC_TRIGGER_GetValue()         _RD13
/**
  @Summary
    Configures the GPIO pin, RD13, as an input.

  @Description
    Configures the GPIO pin, RD13, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD13 as an input
    TRIAC_TRIGGER_SetDigitalInput();
    </code>

*/
#define TRIAC_TRIGGER_SetDigitalInput()  _TRISD13 = 1
/**
  @Summary
    Configures the GPIO pin, RD13, as an output.

  @Description
    Configures the GPIO pin, RD13, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD13 as an output
    TRIAC_TRIGGER_SetDigitalOutput();
    </code>

*/
#define TRIAC_TRIGGER_SetDigitalOutput() _TRISD13 = 0
/**
  @Summary
    Sets the GPIO pin, RD3, high using LATD3.

  @Description
    Sets the GPIO pin, RD3, high using LATD3.

  @Preconditions
    The RD3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD3 high (1)
    SS1_SetHigh();
    </code>

*/
#define SS1_SetHigh()          _LATD3 = 1
/**
  @Summary
    Sets the GPIO pin, RD3, low using LATD3.

  @Description
    Sets the GPIO pin, RD3, low using LATD3.

  @Preconditions
    The RD3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD3 low (0)
    SS1_SetLow();
    </code>

*/
#define SS1_SetLow()           _LATD3 = 0
/**
  @Summary
    Toggles the GPIO pin, RD3, using LATD3.

  @Description
    Toggles the GPIO pin, RD3, using LATD3.

  @Preconditions
    The RD3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD3
    SS1_Toggle();
    </code>

*/
#define SS1_Toggle()           _LATD3 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RD3.

  @Description
    Reads the value of the GPIO pin, RD3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD3
    postValue = SS1_GetValue();
    </code>

*/
#define SS1_GetValue()         _RD3
/**
  @Summary
    Configures the GPIO pin, RD3, as an input.

  @Description
    Configures the GPIO pin, RD3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD3 as an input
    SS1_SetDigitalInput();
    </code>

*/
#define SS1_SetDigitalInput()  _TRISD3 = 1
/**
  @Summary
    Configures the GPIO pin, RD3, as an output.

  @Description
    Configures the GPIO pin, RD3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD3 as an output
    SS1_SetDigitalOutput();
    </code>

*/
#define SS1_SetDigitalOutput() _TRISD3 = 0
/**
  @Summary
    Sets the GPIO pin, RD6, high using LATD6.

  @Description
    Sets the GPIO pin, RD6, high using LATD6.

  @Preconditions
    The RD6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD6 high (1)
    SDI1_SetHigh();
    </code>

*/
#define SDI1_SetHigh()          _LATD6 = 1
/**
  @Summary
    Sets the GPIO pin, RD6, low using LATD6.

  @Description
    Sets the GPIO pin, RD6, low using LATD6.

  @Preconditions
    The RD6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD6 low (0)
    SDI1_SetLow();
    </code>

*/
#define SDI1_SetLow()           _LATD6 = 0
/**
  @Summary
    Toggles the GPIO pin, RD6, using LATD6.

  @Description
    Toggles the GPIO pin, RD6, using LATD6.

  @Preconditions
    The RD6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD6
    SDI1_Toggle();
    </code>

*/
#define SDI1_Toggle()           _LATD6 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RD6.

  @Description
    Reads the value of the GPIO pin, RD6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD6
    postValue = SDI1_GetValue();
    </code>

*/
#define SDI1_GetValue()         _RD6
/**
  @Summary
    Configures the GPIO pin, RD6, as an input.

  @Description
    Configures the GPIO pin, RD6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD6 as an input
    SDI1_SetDigitalInput();
    </code>

*/
#define SDI1_SetDigitalInput()  _TRISD6 = 1
/**
  @Summary
    Configures the GPIO pin, RD6, as an output.

  @Description
    Configures the GPIO pin, RD6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD6 as an output
    SDI1_SetDigitalOutput();
    </code>

*/
#define SDI1_SetDigitalOutput() _TRISD6 = 0
/**
  @Summary
    Sets the GPIO pin, RE0, high using LATE0.

  @Description
    Sets the GPIO pin, RE0, high using LATE0.

  @Preconditions
    The RE0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE0 high (1)
    LED3_SetHigh();
    </code>

*/
#define LED3_SetHigh()          _LATE0 = 1
/**
  @Summary
    Sets the GPIO pin, RE0, low using LATE0.

  @Description
    Sets the GPIO pin, RE0, low using LATE0.

  @Preconditions
    The RE0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE0 low (0)
    LED3_SetLow();
    </code>

*/
#define LED3_SetLow()           _LATE0 = 0
/**
  @Summary
    Toggles the GPIO pin, RE0, using LATE0.

  @Description
    Toggles the GPIO pin, RE0, using LATE0.

  @Preconditions
    The RE0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE0
    LED3_Toggle();
    </code>

*/
#define LED3_Toggle()           _LATE0 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE0.

  @Description
    Reads the value of the GPIO pin, RE0.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE0
    postValue = LED3_GetValue();
    </code>

*/
#define LED3_GetValue()         _RE0
/**
  @Summary
    Configures the GPIO pin, RE0, as an input.

  @Description
    Configures the GPIO pin, RE0, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE0 as an input
    LED3_SetDigitalInput();
    </code>

*/
#define LED3_SetDigitalInput()  _TRISE0 = 1
/**
  @Summary
    Configures the GPIO pin, RE0, as an output.

  @Description
    Configures the GPIO pin, RE0, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE0 as an output
    LED3_SetDigitalOutput();
    </code>

*/
#define LED3_SetDigitalOutput() _TRISE0 = 0
/**
  @Summary
    Sets the GPIO pin, RE1, high using LATE1.

  @Description
    Sets the GPIO pin, RE1, high using LATE1.

  @Preconditions
    The RE1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE1 high (1)
    LED4_SetHigh();
    </code>

*/
#define LED4_SetHigh()          _LATE1 = 1
/**
  @Summary
    Sets the GPIO pin, RE1, low using LATE1.

  @Description
    Sets the GPIO pin, RE1, low using LATE1.

  @Preconditions
    The RE1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE1 low (0)
    LED4_SetLow();
    </code>

*/
#define LED4_SetLow()           _LATE1 = 0
/**
  @Summary
    Toggles the GPIO pin, RE1, using LATE1.

  @Description
    Toggles the GPIO pin, RE1, using LATE1.

  @Preconditions
    The RE1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE1
    LED4_Toggle();
    </code>

*/
#define LED4_Toggle()           _LATE1 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE1.

  @Description
    Reads the value of the GPIO pin, RE1.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE1
    postValue = LED4_GetValue();
    </code>

*/
#define LED4_GetValue()         _RE1
/**
  @Summary
    Configures the GPIO pin, RE1, as an input.

  @Description
    Configures the GPIO pin, RE1, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE1 as an input
    LED4_SetDigitalInput();
    </code>

*/
#define LED4_SetDigitalInput()  _TRISE1 = 1
/**
  @Summary
    Configures the GPIO pin, RE1, as an output.

  @Description
    Configures the GPIO pin, RE1, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE1 as an output
    LED4_SetDigitalOutput();
    </code>

*/
#define LED4_SetDigitalOutput() _TRISE1 = 0
/**
  @Summary
    Sets the GPIO pin, RE2, high using LATE2.

  @Description
    Sets the GPIO pin, RE2, high using LATE2.

  @Preconditions
    The RE2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE2 high (1)
    LED5_SetHigh();
    </code>

*/
#define LED5_SetHigh()          _LATE2 = 1
/**
  @Summary
    Sets the GPIO pin, RE2, low using LATE2.

  @Description
    Sets the GPIO pin, RE2, low using LATE2.

  @Preconditions
    The RE2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE2 low (0)
    LED5_SetLow();
    </code>

*/
#define LED5_SetLow()           _LATE2 = 0
/**
  @Summary
    Toggles the GPIO pin, RE2, using LATE2.

  @Description
    Toggles the GPIO pin, RE2, using LATE2.

  @Preconditions
    The RE2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE2
    LED5_Toggle();
    </code>

*/
#define LED5_Toggle()           _LATE2 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE2.

  @Description
    Reads the value of the GPIO pin, RE2.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE2
    postValue = LED5_GetValue();
    </code>

*/
#define LED5_GetValue()         _RE2
/**
  @Summary
    Configures the GPIO pin, RE2, as an input.

  @Description
    Configures the GPIO pin, RE2, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE2 as an input
    LED5_SetDigitalInput();
    </code>

*/
#define LED5_SetDigitalInput()  _TRISE2 = 1
/**
  @Summary
    Configures the GPIO pin, RE2, as an output.

  @Description
    Configures the GPIO pin, RE2, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE2 as an output
    LED5_SetDigitalOutput();
    </code>

*/
#define LED5_SetDigitalOutput() _TRISE2 = 0
/**
  @Summary
    Sets the GPIO pin, RE3, high using LATE3.

  @Description
    Sets the GPIO pin, RE3, high using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 high (1)
    LED6_SetHigh();
    </code>

*/
#define LED6_SetHigh()          _LATE3 = 1
/**
  @Summary
    Sets the GPIO pin, RE3, low using LATE3.

  @Description
    Sets the GPIO pin, RE3, low using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 low (0)
    LED6_SetLow();
    </code>

*/
#define LED6_SetLow()           _LATE3 = 0
/**
  @Summary
    Toggles the GPIO pin, RE3, using LATE3.

  @Description
    Toggles the GPIO pin, RE3, using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE3
    LED6_Toggle();
    </code>

*/
#define LED6_Toggle()           _LATE3 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE3.

  @Description
    Reads the value of the GPIO pin, RE3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE3
    postValue = LED6_GetValue();
    </code>

*/
#define LED6_GetValue()         _RE3
/**
  @Summary
    Configures the GPIO pin, RE3, as an input.

  @Description
    Configures the GPIO pin, RE3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an input
    LED6_SetDigitalInput();
    </code>

*/
#define LED6_SetDigitalInput()  _TRISE3 = 1
/**
  @Summary
    Configures the GPIO pin, RE3, as an output.

  @Description
    Configures the GPIO pin, RE3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an output
    LED6_SetDigitalOutput();
    </code>

*/
#define LED6_SetDigitalOutput() _TRISE3 = 0
/**
  @Summary
    Sets the GPIO pin, RE4, high using LATE4.

  @Description
    Sets the GPIO pin, RE4, high using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE4 high (1)
    LED7_SetHigh();
    </code>

*/
#define LED7_SetHigh()          _LATE4 = 1
/**
  @Summary
    Sets the GPIO pin, RE4, low using LATE4.

  @Description
    Sets the GPIO pin, RE4, low using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE4 low (0)
    LED7_SetLow();
    </code>

*/
#define LED7_SetLow()           _LATE4 = 0
/**
  @Summary
    Toggles the GPIO pin, RE4, using LATE4.

  @Description
    Toggles the GPIO pin, RE4, using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE4
    LED7_Toggle();
    </code>

*/
#define LED7_Toggle()           _LATE4 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE4.

  @Description
    Reads the value of the GPIO pin, RE4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE4
    postValue = LED7_GetValue();
    </code>

*/
#define LED7_GetValue()         _RE4
/**
  @Summary
    Configures the GPIO pin, RE4, as an input.

  @Description
    Configures the GPIO pin, RE4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE4 as an input
    LED7_SetDigitalInput();
    </code>

*/
#define LED7_SetDigitalInput()  _TRISE4 = 1
/**
  @Summary
    Configures the GPIO pin, RE4, as an output.

  @Description
    Configures the GPIO pin, RE4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE4 as an output
    LED7_SetDigitalOutput();
    </code>

*/
#define LED7_SetDigitalOutput() _TRISE4 = 0
/**
  @Summary
    Sets the GPIO pin, RE5, high using LATE5.

  @Description
    Sets the GPIO pin, RE5, high using LATE5.

  @Preconditions
    The RE5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE5 high (1)
    LED8_SetHigh();
    </code>

*/
#define LED8_SetHigh()          _LATE5 = 1
/**
  @Summary
    Sets the GPIO pin, RE5, low using LATE5.

  @Description
    Sets the GPIO pin, RE5, low using LATE5.

  @Preconditions
    The RE5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE5 low (0)
    LED8_SetLow();
    </code>

*/
#define LED8_SetLow()           _LATE5 = 0
/**
  @Summary
    Toggles the GPIO pin, RE5, using LATE5.

  @Description
    Toggles the GPIO pin, RE5, using LATE5.

  @Preconditions
    The RE5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE5
    LED8_Toggle();
    </code>

*/
#define LED8_Toggle()           _LATE5 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE5.

  @Description
    Reads the value of the GPIO pin, RE5.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE5
    postValue = LED8_GetValue();
    </code>

*/
#define LED8_GetValue()         _RE5
/**
  @Summary
    Configures the GPIO pin, RE5, as an input.

  @Description
    Configures the GPIO pin, RE5, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE5 as an input
    LED8_SetDigitalInput();
    </code>

*/
#define LED8_SetDigitalInput()  _TRISE5 = 1
/**
  @Summary
    Configures the GPIO pin, RE5, as an output.

  @Description
    Configures the GPIO pin, RE5, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE5 as an output
    LED8_SetDigitalOutput();
    </code>

*/
#define LED8_SetDigitalOutput() _TRISE5 = 0
/**
  @Summary
    Sets the GPIO pin, RE6, high using LATE6.

  @Description
    Sets the GPIO pin, RE6, high using LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE6 high (1)
    LED9_SetHigh();
    </code>

*/
#define LED9_SetHigh()          _LATE6 = 1
/**
  @Summary
    Sets the GPIO pin, RE6, low using LATE6.

  @Description
    Sets the GPIO pin, RE6, low using LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE6 low (0)
    LED9_SetLow();
    </code>

*/
#define LED9_SetLow()           _LATE6 = 0
/**
  @Summary
    Toggles the GPIO pin, RE6, using LATE6.

  @Description
    Toggles the GPIO pin, RE6, using LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE6
    LED9_Toggle();
    </code>

*/
#define LED9_Toggle()           _LATE6 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE6.

  @Description
    Reads the value of the GPIO pin, RE6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE6
    postValue = LED9_GetValue();
    </code>

*/
#define LED9_GetValue()         _RE6
/**
  @Summary
    Configures the GPIO pin, RE6, as an input.

  @Description
    Configures the GPIO pin, RE6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE6 as an input
    LED9_SetDigitalInput();
    </code>

*/
#define LED9_SetDigitalInput()  _TRISE6 = 1
/**
  @Summary
    Configures the GPIO pin, RE6, as an output.

  @Description
    Configures the GPIO pin, RE6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE6 as an output
    LED9_SetDigitalOutput();
    </code>

*/
#define LED9_SetDigitalOutput() _TRISE6 = 0
/**
  @Summary
    Sets the GPIO pin, RE7, high using LATE7.

  @Description
    Sets the GPIO pin, RE7, high using LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE7 high (1)
    LED10_SetHigh();
    </code>

*/
#define LED10_SetHigh()          _LATE7 = 1
/**
  @Summary
    Sets the GPIO pin, RE7, low using LATE7.

  @Description
    Sets the GPIO pin, RE7, low using LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE7 low (0)
    LED10_SetLow();
    </code>

*/
#define LED10_SetLow()           _LATE7 = 0
/**
  @Summary
    Toggles the GPIO pin, RE7, using LATE7.

  @Description
    Toggles the GPIO pin, RE7, using LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE7
    LED10_Toggle();
    </code>

*/
#define LED10_Toggle()           _LATE7 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE7.

  @Description
    Reads the value of the GPIO pin, RE7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE7
    postValue = LED10_GetValue();
    </code>

*/
#define LED10_GetValue()         _RE7
/**
  @Summary
    Configures the GPIO pin, RE7, as an input.

  @Description
    Configures the GPIO pin, RE7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE7 as an input
    LED10_SetDigitalInput();
    </code>

*/
#define LED10_SetDigitalInput()  _TRISE7 = 1
/**
  @Summary
    Configures the GPIO pin, RE7, as an output.

  @Description
    Configures the GPIO pin, RE7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE7 as an output
    LED10_SetDigitalOutput();
    </code>

*/
#define LED10_SetDigitalOutput() _TRISE7 = 0

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the dsPIC33CH128MP508
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize (void);


#endif
