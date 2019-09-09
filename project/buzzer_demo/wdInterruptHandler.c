#include <msp430.h>
#include "buzzer.h"


//interrupt file in buzzer

void
__interrupt_vec(WDT_VECTOR) WDT(){	/* 250 interrupts/sec */
  static char count = 0;
  static int i = 0;
  //int lost[] = {5000, 0, 3000, 0, 700, 0, 5000, 0, 3000, 0, 700, 0, 5000, 0, 3000, 0, 700, 0, 600, 0, 500, 0};
  int lost[] = {2698,0, 2880,0,2988,0,2698,0,2880,0,2988,0,2698,0,2880,0,2988,0,11319,0,11175,0,2988,0,21047,0,2988,0,2784,0,2659,0,2587,0,2659,0,2784,0,2659,0,2698,0,2880,0};
  if(++count == 20){
    buzzer_set_period(lost[i]);
    i++;
    count = 0;
  }
}
