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
#include "global.h"

uint8_t count = 0;

const PATTERN PRIMO = {1999, 1999, 1999, 1999, 0, 0};  /* {periodo_red, perido_green, counter_red, counter_green, compare_red, compare_green} */
const PATTERN SECONDO = {1999, 1999, 1999, 1999, 0, 999};
const PATTERN TERZO = {1999, 1999, 999, 1999, 999, 0};
const PATTERN QUARTO = {999, 999, 999, 499, 499, 499};
const PATTERN QUINTO = {499, 499, 249, 499, 249, 249};
const PATTERN SESTO = {1999, 1999, 1999, 1999, 499, 999};
const PATTERN SETTIMO = {1999, 999, 999, 999, 999, 499};    

/* [] END OF FILE */
