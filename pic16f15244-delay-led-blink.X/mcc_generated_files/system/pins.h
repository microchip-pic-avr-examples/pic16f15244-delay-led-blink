/**
  Generated Pins header File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.h

  Summary:
    This is generated driver header for pins. 

  Description:
    This header file provides APIs for all pins selected in the GUI.

  Generation Information:
    Driver Version:  3.0.0

*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA2 aliases
#define LED0_TRIS                 TRISAbits.TRISA2
#define LED0_LAT                  LATAbits.LATA2
#define LED0_PORT                 PORTAbits.RA2
#define LED0_WPU                  WPUAbits.WPUA2
#define LED0_OD                   ODCONAbits.ODCA2
#define LED0_ANS                  ANSELAbits.ANSA2
#define LED0_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED0_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED0_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED0_GetValue()           PORTAbits.RA2
#define LED0_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED0_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PINS_H
/**
 End of File
*/