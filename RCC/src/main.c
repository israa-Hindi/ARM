
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

#include "../include/RCC_interface.h"
#include "../include/RCC_config.h"
#include "../include/RCC_private.h"

#include "../include/GPIO_Interface.h"
#include "../include/GPIO_Config.h"
#include "../include/GPIO_Private.h"
#include "stm32F4xx.h"



void APP_voidDelayMs(u32 Copy_u32Delay);


void main(void)
{

	/*Step 1 : System Clock is 25 MHz From HSE*/
	RCC_voidInitSys();

	/*Step 2 : Enable GPIO Peripherial Clock For Port A*/
	RCC_u8EnablePeripheralClock(RCC_u8_AHB1_BUS,0);
	RCC_u8EnablePeripheralClock(RCC_u8_AHB1_BUS,1);
	RCC_u8EnablePeripheralClock(RCC_u8_AHB1_BUS,2);
   // RCC->AHB1ENR=1;
	/*Step 3 : Configur pin A0 as output pin*/
	GPIO_voidSetPinMode(GPIOA,PIN0,OUTPUT);
	GPIO_voidSetPinType(GPIOA,PIN0,OUTPUT_PP);

	GPIO_voidSetPinSpeed(GPIOA,PIN0,OUTPUT_LS);

//	/*Step 4 : Configur pin A0 as  pin High*/
//	GPIO_voidSetPinValueAtomic(GPIOA,PIN0,SET);

	while(1)
	{

		/* Blink LED */
		GPIO_voidSetPinValueNonAtomic(GPIOA,PIN0,SET);
		APP_voidDelayMs(1000000UL);
		GPIO_voidSetPinValueNonAtomic(GPIOA,PIN0,RST);
		APP_voidDelayMs(1000000UL);


	}

}

/******************************************Function Implementation *******************************/
void APP_voidDelayMs(u32 Copy_u32Delay)
{

   for(u32 i = 0 ; i <Copy_u32Delay * 300; i++ )
   {
	   asm("NOP") ;
   }
}
