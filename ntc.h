#ifndef _NTC_H
#define _NTC_H

/*
  Author:     Nima Askari
  WebSite:    http://www.github.com/NimaLTD
  Instagram:  http://instagram.com/github.NimaLTD
  Youtube:    https://www.youtube.com/channel/UCUhY7qY1klJm1d2kulr9ckw
  
  Version:    1.0.0
  
  
  Reversion History:
  
  (1.0.0)
  First release.
*/

#include <stdint.h>

float ntc_convertToC(uint32_t adcValue);
float ntc_convertToF(uint32_t adcValue);
  
#endif

