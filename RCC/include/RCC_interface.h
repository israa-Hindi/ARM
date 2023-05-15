/****************************************************/
/************ Name    : Mohamed ElFawakhry **********/
/************ Date    : 17/5/2021          **********/
/************ Version  : 1.0v              **********/
/************ SWC  : Stm32f103xx.h         **********/
/****************************************************/
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

/*Macros For Buses*/
#define RCC_u8_AHB1_BUS 	 0
#define RCC_u8_AHB2_BUS      1
#define RCC_u8_APB1_BUS 	 2
#define RCC_u8_APB2_BUS 	 3

/*Macros For Peripheral for AHB BUSS*/
#define RCC_u8_DMA1					0
#define RCC_u8_DMA2					1
#define RCC_u8_SRAMEN				2
#define RCC_u8_FLIFEN				4
#define RCC_u8_CRCEN				6
#define RCC_u8_FSMCEN				8
#define RCC_u8_SDIOEN				10

/*Macros For Peripheral for APB2 BUSS*/
#define RCC_u8_AFIO					0
#define RCC_u8_GPIOA				2
#define RCC_u8_GPIOB				3
#define RCC_u8_GPIOC				4
#define RCC_u8_GPIOD				5
#define RCC_u8_ADC1					9
#define RCC_u8_ADC2					10
#define RCC_u8_TIMER1				11
#define RCC_u8_SPI1					12
#define RCC_u8_TIMER8				13
#define RCC_u8_UART1				14
#define RCC_u8_ADC3					15
#define RCC_u8_TIMER9				19
#define RCC_u8_TIMER10				20
#define RCC_u8_TIMER11				21

/*Macros For Peripheral for APB1 BUSS*/
#define RCC_u8_TIMER2				0
#define RCC_u8_TIMER3				1
#define RCC_u8_TIMER4				2
#define RCC_u8_TIMER5				3
#define RCC_u8_TIMER6				4
#define RCC_u8_TIMER7				5
#define RCC_u8_TIMER12				6
#define RCC_u8_TIMER13				7
#define RCC_u8_TIMER14				8
#define RCC_u8_WWDG					11
#define RCC_u8_SPI2					14
#define RCC_u8_SPI3					15
#define RCC_u8_UART2				17
#define RCC_u8_UART3				18
#define RCC_u8_UART4				19
#define RCC_u8_UART5				20
#define RCC_u8_I2C1					21
#define RCC_u8_I2C2					22
#define RCC_u8_USB					23
#define RCC_u8_CAN					25
#define RCC_u8_BKP					27
#define RCC_u8_PWR					28
#define RCC_u8_DAC					29




void RCC_voidInitSys(void);

u8 RCC_u8EnablePeripheralClock(u8 Copy_u8Bus , u8 Copy_u8PerId);

u8 RCC_u8DisablePeripheralClock(u8 Copy_u8Bus , u8 Copy_u8PerId);


#endif
