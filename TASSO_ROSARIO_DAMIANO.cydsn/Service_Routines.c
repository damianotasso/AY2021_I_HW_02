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
#include "Service_Routines.h"
#include "global.h"

CY_ISR(BUTTON_ISR)
{
    count++;
    
    if(count == 1)
    {
        PWM_red_WritePeriod(PRIMO.periodo_red);
        PWM_green_WritePeriod(PRIMO.periodo_green);
        PWM_red_WriteCompare(PRIMO.compare_red);
        PWM_green_WriteCompare(PRIMO.compare_green);
        PWM_red_WriteCounter(PRIMO.counter_red);
        PWM_green_WriteCounter(PRIMO.counter_green);
    }
    if(count == 2)
    {
        PWM_red_WritePeriod(SECONDO.periodo_red);
        PWM_green_WritePeriod(SECONDO.periodo_green);
        PWM_red_WriteCompare(SECONDO.compare_red);
        PWM_green_WriteCompare(SECONDO.compare_green);
        PWM_red_WriteCounter(SECONDO.counter_red);
        PWM_green_WriteCounter(SECONDO.counter_green);
    }
    if(count == 3)
    {
        PWM_red_WritePeriod(TERZO.periodo_red);
        PWM_green_WritePeriod(TERZO.periodo_green);
        PWM_red_WriteCompare(TERZO.compare_red);
        PWM_green_WriteCompare(TERZO.compare_green);
        PWM_red_WriteCounter(TERZO.counter_red);
        PWM_green_WriteCounter(TERZO.counter_green);

    }
    if(count == 4) 
    {
        PWM_red_WritePeriod(QUARTO.periodo_red);
        PWM_green_WritePeriod(QUARTO.periodo_green);
        PWM_red_WriteCompare(QUARTO.compare_red);
        PWM_green_WriteCompare(QUARTO.compare_green);
        PWM_red_WriteCounter(QUARTO.counter_red);
        PWM_green_WriteCounter(QUARTO.counter_green);
    }
    if(count == 5)
    {
        PWM_red_WritePeriod(QUINTO.periodo_red);
        PWM_green_WritePeriod(QUINTO.periodo_green);
        PWM_red_WriteCompare(QUINTO.compare_red);
        PWM_green_WriteCompare(QUINTO.compare_green);
        PWM_red_WriteCounter(QUINTO.counter_red);
        PWM_green_WriteCounter(QUINTO.counter_green);        
    }
    if(count == 6)
    {
        PWM_red_WritePeriod(SESTO.periodo_red);
        PWM_green_WritePeriod(SESTO.periodo_green);
        PWM_red_WriteCompare(SESTO.compare_red);
        PWM_green_WriteCompare(SESTO.compare_green);
        PWM_red_WriteCounter(SESTO.counter_red);
        PWM_green_WriteCounter(SESTO.counter_green);        
    }
    if(count == 7)
    {
        PWM_red_WritePeriod(SETTIMO.periodo_red);
        PWM_green_WritePeriod(SETTIMO.periodo_green);
        PWM_red_WriteCompare(SETTIMO.compare_red);
        PWM_green_WriteCompare(SETTIMO.compare_green);
        PWM_red_WriteCounter(SETTIMO.counter_red);
        PWM_green_WriteCounter(SETTIMO.counter_green);
        
        count = 0;
    }
       
}

/* [] END OF FILE */
