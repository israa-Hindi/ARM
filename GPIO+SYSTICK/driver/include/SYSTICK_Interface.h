#ifndef SYSTICK_INTERFACE_H
#define SYSTICK_INTERFACE_H

void SYSTICK_voidInit();
void SYSTICK_voidSetBusyWait(u32 Copy_u32Ticks);
u32 SYSTICK_u32GetElapsedTime();
u32 SYSTICK_u32GetRemainingTime();


#endif