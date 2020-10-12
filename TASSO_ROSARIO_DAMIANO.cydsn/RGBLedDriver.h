/* ========================================
 *
 * Author: Damiano R. Tasso 944232
 * 
 * This file contains the definition of the new type 'PATTERN' as a struct with the parameters that I can 
 * modify with the different patterns  
 *
 * ========================================
*/
#ifndef __RGB_LED_DRIVER_H__
    #define __RGB_LED_DRIVER_H__
    
    #include "project.h"
    
    typedef struct {
        uint16_t periodo_red;
        uint16_t periodo_green;
        uint16_t counter_red;
        uint16_t counter_green;
        uint16_t compare_red;
        uint16_t compare_green;        
    }PATTERN;
    
    void RGBLed_Start();
    void RGBLed_Stop();
    
    
#endif
/* [] END OF FILE */
