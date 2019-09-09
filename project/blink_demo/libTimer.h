#ifdef libTimer_included
#define libTimer_included

void configureClocks();
void enableWDInterrupts();
void timerAUpmode();

unsigned char gert_sr();
void set_sr(), or_sr();, and_sr();

#endif
