
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"
#include "RCC_Interface.h"
#include "GPIO_Interface.h"
#include "SYSTICK_Interface.h"

void APP_voidDelayMs(u32 Copy_u32Delay);
void SSD_voidPrintNumber(u8 Copy_u8PortID, u8 Copy_u8Number);
void SSD_voidPrintByDescending(u8 Copy_u8PortID, u8 Copy_u8Number);
void SSD_voidPrintByAscending(u8 Copy_u8PortID, u8 Copy_u8Number);

#define ZERO  0x0000003F
#define ONE   0x00000006
#define TWO   0x0000005B
#define THREE 0x0000004F
#define FOUR  0x00000066
#define FIVE  0x0000006D
#define SIX   0x0000007D
#define SEVEN 0x00000007
#define EIGHT 0x0000007F
#define NINE  0x0000006F

int main()
{
	//step1 : system clk is 25MHZ from HSE
	RCC_voidInitSysCLK();

	SYSTICK_voidInit();

	//step2 : Enable GPIO peripheral clk from PORTA
	RCC_voidEnablePeripheralClk(AHP1,0);
	RCC_voidEnablePeripheralClk(AHP1,1);
	RCC_voidEnablePeripheralClk(AHP1,2);

	GPIO_voidSetPinMode(GPIOB,0,GPIO_OUTPUT);
	GPIO_voidSetPinOutputType(GPIOB,0,PUSH_PULL);
	GPIO_voidSetPinOutputSpeed(GPIOB,0,LOW_SPEED);


	   GPIO_voidSetPinMode(GPIOA,0,GPIO_OUTPUT);
	   GPIO_voidSetPinMode(GPIOA,1,GPIO_OUTPUT);
	   GPIO_voidSetPinMode(GPIOA,2,GPIO_OUTPUT);
	   GPIO_voidSetPinMode(GPIOA,3,GPIO_OUTPUT);
	   GPIO_voidSetPinMode(GPIOA,4,GPIO_OUTPUT);
	   GPIO_voidSetPinMode(GPIOA,5,GPIO_OUTPUT);
	   GPIO_voidSetPinMode(GPIOA,6,GPIO_OUTPUT);

		GPIO_voidSetPinOutputType(GPIOA,0,PUSH_PULL);
		GPIO_voidSetPinOutputType(GPIOA,1,PUSH_PULL);
		GPIO_voidSetPinOutputType(GPIOA,2,PUSH_PULL);
		GPIO_voidSetPinOutputType(GPIOA,3,PUSH_PULL);
		GPIO_voidSetPinOutputType(GPIOA,4,PUSH_PULL);
		GPIO_voidSetPinOutputType(GPIOA,5,PUSH_PULL);
		GPIO_voidSetPinOutputType(GPIOA,6,PUSH_PULL);

		GPIO_voidSetPinOutputSpeed(GPIOA,0,LOW_SPEED);
		GPIO_voidSetPinOutputSpeed(GPIOA,1,LOW_SPEED);
		GPIO_voidSetPinOutputSpeed(GPIOA,2,LOW_SPEED);
		GPIO_voidSetPinOutputSpeed(GPIOA,3,LOW_SPEED);
		GPIO_voidSetPinOutputSpeed(GPIOA,4,LOW_SPEED);
		GPIO_voidSetPinOutputSpeed(GPIOA,5,LOW_SPEED);
		GPIO_voidSetPinOutputSpeed(GPIOA,6,LOW_SPEED);



	while (1)
    {
		GPIO_voidSetPinValue(GPIOB,0,GPIO_HIGH);
		SYSTICK_voidSetBusyWait(1000000UL);
		GPIO_voidSetPinValue(GPIOB,0,GPIO_LOW);
		SYSTICK_voidSetBusyWait(1000000UL);
//		SSD_voidPrintByAscending(GPIOA,9);
//		SSD_voidPrintByDescending(GPIOA,8);

    }
}

void APP_voidDelayMs(u32 Copy_u32Delay)
{
	for (u32 i = 0; i < Copy_u32Delay * 300; i++)
	{
		asm("NOP");
	}
}

void SSD_voidPrintNumber(u8 Copy_u8PortID, u8 Copy_u8Number)
{

	switch(Copy_u8Number)
	{
	case 0:   GPIO_voidSetPortValue(Copy_u8PortID,0x3F);		break;
	case 1:   GPIO_voidSetPortValue(Copy_u8PortID,0x06);		break;
	case 2:   GPIO_voidSetPortValue(Copy_u8PortID,0x5B);		break;
	case 3:   GPIO_voidSetPortValue(Copy_u8PortID,0x4F);		break;
	case 4:   GPIO_voidSetPortValue(Copy_u8PortID,0x66);		break;
	case 5:   GPIO_voidSetPortValue(Copy_u8PortID,0x6D);		break;
	case 6:   GPIO_voidSetPortValue(Copy_u8PortID,0x7D);		break;
	case 7:   GPIO_voidSetPortValue(Copy_u8PortID,0x07);		break;
	case 8:   GPIO_voidSetPortValue(Copy_u8PortID,0x7F);		break;
	case 9:   GPIO_voidSetPortValue(Copy_u8PortID,0x6F);		break;
	default:													break;
	}

//	switch(Copy_u8Number)
//	{
//	case 0:
//		  break;
//	case 1:   GPIO_voidSetPortValue(Copy_u8PortID,0x06);		break;
//	case 2:   GPIO_voidSetPortValue(Copy_u8PortID,0x5B);		break;
//	case 3:   GPIO_voidSetPortValue(Copy_u8PortID,0x4F);		break;
//	case 4:   GPIO_voidSetPortValue(Copy_u8PortID,0x66);		break;
//	case 5:   GPIO_voidSetPortValue(Copy_u8PortID,0x6D);		break;
//	case 6:   GPIO_voidSetPortValue(Copy_u8PortID,0x7D);		break;
//	case 7:   GPIO_voidSetPortValue(Copy_u8PortID,0x07);		break;
//	case 8:   GPIO_voidSetPortValue(Copy_u8PortID,0x7F);		break;
//	case 9:   GPIO_voidSetPortValue(Copy_u8PortID,0x6F);		break;
//	default:													break;
//	}
}

void SSD_voidPrintByAscending(u8 Copy_u8PortID, u8 Copy_u8Number)
{
	for(u8 i = 0; i <= Copy_u8Number; i++)
	{
		SSD_voidPrintNumber(Copy_u8PortID,i);
		APP_voidDelayMs(5000);
	}
}

void SSD_voidPrintByDescending(u8 Copy_u8PortID, u8 Copy_u8Number)
{
	for(s8 i = Copy_u8Number; i >= 0; i--)
	{
		SSD_voidPrintNumber(Copy_u8PortID,i);
		APP_voidDelayMs(5000);
	}
}
