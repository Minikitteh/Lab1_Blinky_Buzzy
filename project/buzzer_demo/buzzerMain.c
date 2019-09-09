#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

//buzzrermain.c
int main() {
    configureClocks();
    buzzer_init();
    /* start buzzing !!!*/
    enableWDTInterrupts();
    or_sr(0x18); // CPU off, GIE on


    
    or_sr(0x18);
}
