#ifndef MOLTAROS_TIMER_H
#define MOLTAROS_TIMER_H

#define PIT_CHANNEL0 0x40
#define PIT_CHANNEL1 0x41
#define PIT_CHANNEL2 0x42
#define PIT_COMMAND 0x43
#define PIT_REPEAT 0x36

#include <stdint.h>

void init_timer(uint32_t frequency);


#endif /* MOLTAROS_TIMER_H */