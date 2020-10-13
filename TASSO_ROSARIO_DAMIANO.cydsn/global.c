/* ====================================================================================
 *
 * Author: Damiano R. Tasso 944232
 * 
 * This file contains the initialization of the global variables defined on the global.h  
 *
 * ====================================================================================
*/
#include "project.h"
#include "global.h"

uint8_t count = 1;

/* 
 * For each pattern are defined the following parameters:
 * PATTERN X = {periodo_red, periodo_green, cmp_mode_red, cmp_mode_green, compare_red, compare_green}
 * accordignly to the struct defined on the RGBLedDriver.h 
 */

const PATTERN PRIMO = {1999, 1999, PWM_red__B_PWM__GREATER_THAN, PWM_green__B_PWM__GREATER_THAN, 1999, 1999};  
const PATTERN SECONDO = {1999, 1999, PWM_red__B_PWM__GREATER_THAN, PWM_green__B_PWM__LESS_THAN, 1999, 1000};
const PATTERN TERZO = {1999, 1999, PWM_red__B_PWM__GREATER_THAN, PWM_green__B_PWM__GREATER_THAN, 1000, 1999};
const PATTERN QUARTO = {999, 999, PWM_red__B_PWM__LESS_THAN, PWM_green__B_PWM__GREATER_THAN, 500, 500};
const PATTERN QUINTO = {499, 499, PWM_red__B_PWM__GREATER_THAN, PWM_green__B_PWM__LESS_THAN, 250, 250};
const PATTERN SESTO = {1999, 1999, PWM_red__B_PWM__LESS_THAN, PWM_green__B_PWM__LESS_THAN, 500, 1000};
const PATTERN SETTIMO = {1999, 999, PWM_red__B_PWM__GREATER_THAN, PWM_green__B_PWM__LESS_THAN, 1000, 500};    

/* [] END OF FILE */


