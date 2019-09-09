#include <msp430.h>
#include "led.h"


//#include "switches.h"
//#include "stateMachines.h"
//#include "led.c"
int main(void){
                                          ;
  P1DIR = 0xff;
  for(;;){
    if(P2IN == 0x0E){
      P1OUT = 0x01; //red
    }
    if(P2IN == 0x0D){
      P1OUT = 0x40; //green
    }
    if(P2IN == 0x0B){
      P1OUT = 0x41; //both
    }
    if(P2IN == 0x07){
      P1OUT = 0x00; //both off
    }
  }
}
