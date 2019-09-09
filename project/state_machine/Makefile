# makfile configuration
COMMON_OBJECTS  = 
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h -L/opt/ti/msp430_gcc/include

LDFLAGS   = -L/opt/ti/msp430_gcc/include
#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as

all: state_machine.elf 

#additional rules for files
state_machine.elf: ${COMMON_OBJECTS} mod_state.o led.o switches.o ../lib/libTimer.a
	  ${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: state_machine.elf
	mspdebug rf2500 "prog state_machine.elf"

clean:
	rm -f *.o *.elf *.c~ *.~







