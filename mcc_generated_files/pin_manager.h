/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18325
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

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

// get/set Btn1 aliases
#define Btn1_TRIS                 TRISAbits.TRISA0
#define Btn1_LAT                  LATAbits.LATA0
#define Btn1_PORT                 PORTAbits.RA0
#define Btn1_WPU                  WPUAbits.WPUA0
#define Btn1_OD                   ODCONAbits.ODCA0
#define Btn1_ANS                  ANSELAbits.ANSA0
#define Btn1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Btn1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Btn1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Btn1_GetValue()           PORTAbits.RA0
#define Btn1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Btn1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Btn1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define Btn1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define Btn1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define Btn1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define Btn1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define Btn1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set Btn2 aliases
#define Btn2_TRIS                 TRISAbits.TRISA1
#define Btn2_LAT                  LATAbits.LATA1
#define Btn2_PORT                 PORTAbits.RA1
#define Btn2_WPU                  WPUAbits.WPUA1
#define Btn2_OD                   ODCONAbits.ODCA1
#define Btn2_ANS                  ANSELAbits.ANSA1
#define Btn2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define Btn2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define Btn2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define Btn2_GetValue()           PORTAbits.RA1
#define Btn2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define Btn2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define Btn2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define Btn2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define Btn2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define Btn2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define Btn2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define Btn2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISAbits.TRISA4
#define LED2_LAT                  LATAbits.LATA4
#define LED2_PORT                 PORTAbits.RA4
#define LED2_WPU                  WPUAbits.WPUA4
#define LED2_OD                   ODCONAbits.ODCA4
#define LED2_ANS                  ANSELAbits.ANSA4
#define LED2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED2_GetValue()           PORTAbits.RA4
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED2_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISAbits.TRISA5
#define LED1_LAT                  LATAbits.LATA5
#define LED1_PORT                 PORTAbits.RA5
#define LED1_WPU                  WPUAbits.WPUA5
#define LED1_OD                   ODCONAbits.ODCA5
#define LED1_ANS                  ANSELAbits.ANSA5
#define LED1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED1_GetValue()           PORTAbits.RA5
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set PPS aliases
#define PPS_TRIS                 TRISCbits.TRISC3
#define PPS_LAT                  LATCbits.LATC3
#define PPS_PORT                 PORTCbits.RC3
#define PPS_WPU                  WPUCbits.WPUC3
#define PPS_OD                   ODCONCbits.ODCC3
#define PPS_ANS                  ANSELCbits.ANSC3
#define PPS_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define PPS_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define PPS_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define PPS_GetValue()           PORTCbits.RC3
#define PPS_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define PPS_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define PPS_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define PPS_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define PPS_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define PPS_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define PPS_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define PPS_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSC5 = 0; } while(0)

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



#endif // PIN_MANAGER_H
/**
 End of File
*/