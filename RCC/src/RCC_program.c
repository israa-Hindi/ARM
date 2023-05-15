/****************************************************/
/************ Name    : Mohamed ElFawakhry **********/
/************ Date    : 17/5/2021          **********/
/************ Version  : 1.0v              **********/
/************ SWC  : Stm32f103xx.h         **********/
/****************************************************/

#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include "stm32F4xx.h"
#include"RCC_interface.h"
#include"RCC_private.h"
#include"RCC_config.h"
#include "stm32F4xx.h"


void RCC_voidInitSys(void)
{
#if RCC_u8_CLK_TYPE == RCC_u8_HSI
	    /*1- Enable HSI */
		SET_BIT(RCC_CR,0U);
		/*2-Clk System -->HSI */
		CLR_BIT(RCC_CFGR,0U);
		CLR_BIT(RCC_CFGR,1U);

#elif RCC_u8_CLK_TYPE == RCC_u8_HSE
		/* 1- Enable HSE */
		SET_BIT(RCC_CR,16U);

		 /* 2- Disable BYPASS */
		CLR_BIT(RCC_CR,18U);

		 /* 3- Clk System -->HSE */
		SET_BIT(RCC_CFGR,0U);
		CLR_BIT(RCC_CFGR,1U);

#elif RCC_u8_CLK_TYPE == RCC_u8_PLL
	/*Enable PLL*/
	SET_BIT(RCC_CR,24);
	/*Check PLL is unLocked*/
	while(!(GET_BIT(RCC_CR,25)));
#if RCC_u8_PLL_CLKSOURCE == HALF_HSI
	CLR_BIT(RCC_CFGR,16);
#elif RCC_u8_PLL_CLKSOURCE == HALF_HSE
	SET_BIT(RCC_CFGR,16);

	#endif
#else
#warning "Wrong Choice "

#endif
}

u8 RCC_u8EnablePeripheralClock(u8 Copy_u8Bus , u8 Copy_u8PerId)
{

	u8 Local_u8ErrorState= STD_TYPES_OK ;
	if(Copy_u8PerId < 32 )
	{
		switch (Copy_u8Bus )
		{
		case RCC_u8_AHB1_BUS :
			//RCC->AHBENR |=(1<<Copy_u8PerId);
			 SET_BIT(RCC_AHB1RSTR , Copy_u8PerId);
			 break;
		case RCC_u8_AHB2_BUS :
					//RCC->AHBENR |=(1<<Copy_u8PerId);
			SET_BIT(RCC_AHB2RSTR , Copy_u8PerId);
			break;
		case RCC_u8_APB1_BUS :
			SET_BIT(RCC_APB1RSTR , Copy_u8PerId);
			break;
		case RCC_u8_APB2_BUS :
			SET_BIT(RCC_APB1RSTR , Copy_u8PerId);
			break;
		default : Local_u8ErrorState = STD_TYPES_NOK ;

		}
	}
	else
	{
		Local_u8ErrorState = STD_TYPES_NOK ;
	}
	return Local_u8ErrorState ;
}

u8 RCC_u8DisablePeripheralClock(u8 Copy_u8Bus , u8 Copy_u8PerId)
{
	u8 Local_u8ErrorState= STD_TYPES_OK ;
	if(Copy_u8PerId < 32 )
	{
		switch (Copy_u8Bus )
				{
				case RCC_u8_AHB1_BUS :
					//RCC->AHBENR |=(1<<Copy_u8PerId);
					 CLR_BIT(RCC->AHB1ENR , Copy_u8PerId);
					 break;
				case RCC_u8_AHB2_BUS :
							//RCC->AHBENR |=(1<<Copy_u8PerId);
					CLR_BIT(RCC->AHB2ENR , Copy_u8PerId);
					break;
				case RCC_u8_APB1_BUS :
					CLR_BIT(RCC->APB1ENR , Copy_u8PerId);
					break;
				case RCC_u8_APB2_BUS :
					CLR_BIT(RCC->APB2ENR , Copy_u8PerId);
					break;
				default : Local_u8ErrorState = STD_TYPES_NOK ;

				}
	}
	else
	{
		Local_u8ErrorState = STD_TYPES_NOK ;
	}
	return Local_u8ErrorState ;
}
