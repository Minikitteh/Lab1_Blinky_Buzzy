#include <msp430.h>
#include "stateMachines.h"

void
__interrupt_vec(WDT_VECTOR) WDT(){	/* 250 interrupts/sec */
  static char blink_count = 0;
  int i = 0;
  if (++blink_count == 125) {
    P1OUT |= BIT6 + BIT0; 
    for(i = 0; i < 3; i++){
      P1OUT ^= BIT6 + BIT0;
      __delay_cycles(1000000); //delay for 1 sec
    }
    state_advance();
    blink_count = 0;
  }
}
