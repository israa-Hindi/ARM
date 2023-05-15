#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

#include "SYSTICK_Interface.h"
#include "SYSTICK_Private.h"
#include "SYSTICK_Config.h"
void SYSTICK_voidInit()
{
    CLR_BIT(SYSTICK_CTRL,2);
}
void SYSTICK_voidSetBusyWait(u32 Copy_u32Ticks)
{
    SYSTICK_LOAD = Copy_u32Ticks;

    /* Starting timer */
    SET_BIT(SYSTICK_CTRL,0);

    /* polling on flag */
    while((GET_BIT(SYSTICK_CTRL,16)) == 0);

    /* stop the timer */
    CLR_BIT(SYSTICK_CTRL,0);
    SYSTICK_LOAD = 0;
    SYSTICK_VAL = 0;
}
u32 SYSTICK_u32GetElapsedTime()
{
    u32 local_u32Temp;
    local_u32Temp = SYSTICK_LOAD - SYSTICK_VAL;
    return local_u32Temp;
}
u32 SYSTICK_u32GetRemainingTime()
{
    u32 local_u32Temp;
    local_u32Temp = SYSTICK_LOAD;
    return local_u32Temp;
}
