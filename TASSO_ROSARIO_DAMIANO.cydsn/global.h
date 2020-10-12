/* ================================================================================
 *
 * Author: Damiano R. Tasso 944232
 * 
 * This file contains the definition of the global variables used on the project. 
 * In particular are defined: the varable 'count' --> used to change pattern every 
 * time the interrpt is generated; the seven patterns as a PATTERN type.  
 *
 * ================================================================================
*/
#ifndef __GLOBAL_H__
    #define __GLOBAL_H__
    
    #include "project.h"
    #include "RGBLedDriver.h"
    
    uint8_t count;    
        
    const PATTERN PRIMO;
    const PATTERN SECONDO;
    const PATTERN TERZO;
    const PATTERN QUARTO;
    const PATTERN QUINTO;
    const PATTERN SESTO;
    const PATTERN SETTIMO; 
    
  
    
#endif

/* [] END OF FILE */
