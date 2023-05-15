#ifndef SYSTICK_PRIVATE_H
#define SYSTICK_PRIVATE_H

/************************ BASE ADDRESSES *****************************/

#define SYSTICK_BASE_ADDRESS 0xE000E010

typedef struct
{
	u32 CTRL ;
	u32 LOAD ;
	u32 VAL ;
	u32 CALIB;
}SYSTIC_T;

#define SYSTIC     (SYSTICK_T*)SYSTICK_BASE_ADDRESS


/************************ GPIOA ADDRESSES *****************************/

#define SYSTICK_CTRL         *((volatile u32*)(SYSTICK_BASE_ADDRESS+0x00))
#define SYSTICK_LOAD         *((volatile u32*)(SYSTICK_BASE_ADDRESS+0x04))
#define SYSTICK_VAL          *((volatile u32*)(SYSTICK_BASE_ADDRESS+0x08))
#define SYSTICK_CALIB        *((volatile u32*)(SYSTICK_BASE_ADDRESS+0x0C))


#endif
