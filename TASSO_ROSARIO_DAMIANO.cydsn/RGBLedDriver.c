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
