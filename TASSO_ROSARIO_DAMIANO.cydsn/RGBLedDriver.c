/* ==================================================================================
 *
 * Author: Damiano R. Tasso 944232
 * 
 * This file contains the implementation of the functions used to activate and disactivate
 * the PWMs. 
 * 
 * ==================================================================================
*/
#include "RGBLedDriver.h"


void RGBLed_Start()
{
    PWM_green_Start();
    PWM_red_Start();
}

void RGBLed_Stop()
{
    PWM_green_Stop();
    PWM_red_Stop();
} 

/* [] END OF FILE */
