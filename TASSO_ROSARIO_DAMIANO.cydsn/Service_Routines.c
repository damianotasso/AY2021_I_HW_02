/* =========================================================================================================================================
 * 
 *  Author: Damiano R. Tasso 944232
 *  
 *  This code permits to use an Interrupt Service Routin, generated when the button is pressed. Every time the button is pressed
 *  the variable counter is incremented from one, and the PWM parameters are set with the news ones to create the right pattern.
 *  To set the parameters are used the function PWM_WritePeriod(), PWM_WriteCompare(), PWM_SetCompareMode() and PWM_Write_Counter(). 
 *  The idea was to use the two PWM with the CMP type "FIRMWARE CONTROL" and set with the PWM_SetCompareMode() the right Cmp Type requested 
 *  by the pattern configuration. The PWM_WritePeriod() and PWM_WriteCompare() are used to update the right period and compare value of the
 *  pattern. PWM_Write_Counter() is used to make sure that every time the pattern is changed, the PWM's counter starts again from the initial
 *  value. 
 *
 * =========================================================================================================================================
*/
#include "Service_Routines.h"
#include "global.h"

CY_ISR(BUTTON_ISR)
{
    /* Increment of the count variable */
    count++;
    
    if(count == 1)
    {
        /* setting of the PWMs parameters */        
        PWM_red_SetCompareMode(PRIMO.cmp_mode_red);
        PWM_green_SetCompareMode(PRIMO.cmp_mode_green);
        PWM_red_WritePeriod(PRIMO.periodo_red);
        PWM_green_WritePeriod(PRIMO.periodo_green);
        PWM_red_WriteCompare(PRIMO.compare_red);
        PWM_green_WriteCompare(PRIMO.compare_green);
        PWM_red_WriteCounter(PRIMO.periodo_red);
        PWM_green_WriteCounter(PRIMO.periodo_green);
    }
    if(count == 2)
    {
        PWM_red_SetCompareMode(SECONDO.cmp_mode_red);
        PWM_green_SetCompareMode(SECONDO.cmp_mode_green);
        PWM_red_WritePeriod(SECONDO.periodo_red);
        PWM_green_WritePeriod(SECONDO.periodo_green);   
        PWM_red_WriteCompare(SECONDO.compare_red);
        PWM_green_WriteCompare(SECONDO.compare_green);
        PWM_red_WriteCounter(SECONDO.periodo_red);
        PWM_green_WriteCounter(SECONDO.periodo_green);
    }
    if(count == 3)
    {
        PWM_red_SetCompareMode(TERZO.cmp_mode_red);
        PWM_green_SetCompareMode(TERZO.cmp_mode_green);
        PWM_red_WritePeriod(TERZO.periodo_red);
        PWM_green_WritePeriod(TERZO.periodo_green);
        PWM_red_WriteCompare(TERZO.compare_red);
        PWM_green_WriteCompare(TERZO.compare_green);
        PWM_red_WriteCounter(TERZO.periodo_red);
        PWM_green_WriteCounter(TERZO.periodo_green);
    }
    if(count == 4) 
    {
        PWM_red_SetCompareMode(QUARTO.cmp_mode_red);
        PWM_green_SetCompareMode(QUARTO.cmp_mode_green);
        PWM_red_WritePeriod(QUARTO.periodo_red);
        PWM_green_WritePeriod(QUARTO.periodo_green);
        PWM_red_WriteCompare(QUARTO.compare_red);
        PWM_green_WriteCompare(QUARTO.compare_green);
        PWM_red_WriteCounter(QUARTO.periodo_red);
        PWM_green_WriteCounter(QUARTO.periodo_green);        
    }
    if(count == 5)
    {
        PWM_red_SetCompareMode(QUINTO.cmp_mode_red);
        PWM_green_SetCompareMode(QUINTO.cmp_mode_green);
        PWM_red_WritePeriod(QUINTO.periodo_red);
        PWM_green_WritePeriod(QUINTO.periodo_green);
        PWM_red_WriteCompare(QUINTO.compare_red);
        PWM_green_WriteCompare(QUINTO.compare_green);
        PWM_red_WriteCounter(QUINTO.periodo_red);
        PWM_green_WriteCounter(QUINTO.periodo_green);        
    }
    if(count == 6)
    {
        PWM_red_SetCompareMode(SESTO.cmp_mode_red);
        PWM_green_SetCompareMode(SESTO.cmp_mode_green);
        PWM_red_WritePeriod(SESTO.periodo_red);
        PWM_green_WritePeriod(SESTO.periodo_green);
        PWM_red_WriteCompare(SESTO.compare_red);
        PWM_green_WriteCompare(SESTO.compare_green);
        PWM_red_WriteCounter(SESTO.periodo_red);
        PWM_green_WriteCounter(SESTO.periodo_green);       
    }
    if(count == 7)
    {
        PWM_red_SetCompareMode(SETTIMO.cmp_mode_red);
        PWM_green_SetCompareMode(SETTIMO.cmp_mode_green);
        PWM_red_WritePeriod(SETTIMO.periodo_red);
        PWM_green_WritePeriod(SETTIMO.periodo_green);
        PWM_red_WriteCompare(SETTIMO.compare_red);
        PWM_green_WriteCompare(SETTIMO.compare_green);
        PWM_red_WriteCounter(SETTIMO.periodo_red);
        PWM_green_WriteCounter(SETTIMO.periodo_green);

        count = 0;
    }
       
}

/* [] END OF FILE */
