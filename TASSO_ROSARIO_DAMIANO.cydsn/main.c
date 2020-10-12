/* ====================================================================================
 *
 * Author: Damiano R. Tasso 944232
 * 
 * This file contains the main function in which the interrupt and teh PWM are enabled.  
 * The infinite loop is empty because the programme could be all execute in the ISR.
 *
 * ====================================================================================
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
    
    for(;;)
    {
         
    }
}

/* [] END OF FILE */
