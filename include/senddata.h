#ifndef _SENDDATA_H
#define _SENDDATA_H

#include "spislave.h"
#include "lorawan.h"
#include "cyclic.h"

extern Ticker sendcycler;

void SendPayload(uint8_t port, sendprio_t prio);
void sendCounter(void);
void checkSendQueues(void);
void flushQueues();
void sendcycle(void);

#endif // _SENDDATA_H_