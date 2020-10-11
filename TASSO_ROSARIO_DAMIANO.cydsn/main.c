/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "Service_Routines.h"
#include "global.h"
#include "RGBLedDriver.h"


 
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    Button_Pressed_isr_StartEx(BUTTON_ISR);
    
    RGBLed_Start();
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
         
    }
}

/* [] END OF FILE */
