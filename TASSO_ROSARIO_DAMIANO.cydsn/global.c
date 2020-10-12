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

const PATTERN PRIMO = {1999, 1999, 1999, 1999, 1999, 1999};  /* {periodo_red, perido_green, counter_red, counter_green, compare_red, compare_green} */
const PATTERN SECONDO = {1999, 1999, 1999, 1000, 1999, 1000};
const PATTERN TERZO = {1999, 1999, 1999, 1999, 1000, 1999};
const PATTERN QUARTO = {999, 999, 500, 999, 500, 500};
const PATTERN QUINTO = {499, 499, 499, 250, 250, 250};
const PATTERN SESTO = {1999, 1999, 1750, 1000, 1750, 1000};
const PATTERN SETTIMO = {1999, 999, 1999, 500, 1000, 500};    

/* [] END OF FILE */
