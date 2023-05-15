/****************************************************/
/************ Name    : Mohamed ElFawakhry **********/
/************ Date    : 17/5/2021          **********/
/************ Version  : 1.0v              **********/
/************ SWC  : Stm32f103xx.h         **********/
/****************************************************/
#ifndef STM32F103XX_H
#define STM32F103XX_H

#include"STD_TYPES.h"
#include"BIT_MATH.h"
/******************  RCC Registers ****************/
#define RCC_u32_BASE_ADDRESS     		0x40021000

typedef struct
{
	volatile u32 CR			;
	volatile u32 CFGR		;
	volatile u32 CIR 		;
	volatile u32 APB2RSTR	;
	volatile u32 APB1RSTR	;
	volatile u32 AHB1ENR 	;
	volatile u32 AHB2ENR 	;
	volatile u32 APB1ENR	;
	volatile u32 APB2ENR	;
	volatile u32 BDCR		;
	volatile u32 CSR		;

}RCC_RegDef_t;
#define RCC             ((RCC_RegDef_t*)0x40023800)
//#define RCC            ((volatile u32*)0x40023800)
//#define RCC_CR          *((volatile u32*)0x40023800) // offest=0x00
//#define RCC_CFGR        *((volatile u32*)0x40023808) // offest=0x08
/**************************************************/

/******************  GPIO Registers ****************/
/*GPIOA,GPIOB,GPIOC*/

typedef struct
{
	volatile u32 CRL	;
	volatile u32 CRH	;
	volatile u32 IDR	;
	volatile u32 ODR	;
	volatile u32 BSRR	;
	volatile u32 BRR	;
	volatile u32 LCKR	;

}GPIO_RegDef_t;

//#define GPIOA		((volatile u32*)0x40010800)
//#define GPIOB		((volatile u32*)0x40010C00)
//#define GPIOC		((volatile u32*)0x40011000)

/**************************************************/

/******************  NVIC Registers ****************/
#define NVIC_u32_BASE_ADDRESS			0xE000E100

typedef struct{
	volatile u32 ISER[8];
	volatile u32 Reserved1[24];
	volatile u32 ICER[8];
	volatile u32 Reserved2[24];
	volatile u32 ISPR[8];
	volatile u32 Reserved3[24];
	volatile u32 ICPR[8];
	volatile u32 Reserved4[24];
	volatile u32 IABR[8];
	volatile u32 Reserved5[56];
	volatile u8 IPR[240];
}NVIC_RegDef_t;

#define NVIC 			((NVIC_RegDef_t*)NVIC_u32_BASE_ADDRESS)


/**************************************************/

/******************  EXTI Registers ****************/
#define EXTI_u32_BASE_ADDRESS		0x40010400

typedef struct{
	volatile u32 IMR	;
	volatile u32 EMR	;
	volatile u32 RTSR	;
	volatile u32 FTSR	;
	volatile u32 SWIER	;
	volatile u32 PR	;
}EXTI_RegDef_t;

#define	EXTI		((EXTI_RegDef_t*)EXTI_u32_BASE_ADDRESS)

/**************************************************/

/******************  AF Registers ****************/
#define AF_u32_BASE_ADDRESS			0x40010000

typedef struct
{
	volatile u32 EVCR		;	
	volatile u32 MAPR		;
	volatile u32 EXTICR[4]	;
	volatile u32 MAPR2		;
	
}AF_RegDef_t;

//#define AF							((AF_RegDef_t*))AF_u32_BASE_ADDRESS)
/**************************************************/

/******************  SYSTIC Registers ****************/

#define STK_u32_BASE_ADDRESS		0xE000E010

typedef struct
{
	volatile u32 	CTRL ;
	volatile u32	LOAD ;
	volatile u32	 VAL  ;
	volatile u32 	CALIB	 ;
}STK_RegDef_t;

#define STK 			((STK_RegDef_t*)STK_u32_BASE_ADDRESS)	
/**************************************************/

/******************  SPI Registers ****************/
#define SPI1_u32_BASE_ADDRESS		0x40013000

typedef struct
{
	volatile u32 CR1 	;
	volatile u32 CR2		;
	volatile u32	SR		;
	volatile u32 DR		;
	volatile u32 CRCPR 	;
	volatile u32 RXCRCR	;
	volatile u32 TXCRCR	;
	volatile u32 I2SCFGR	;
	volatile u32 I2SPR	;
}SPI1_RegDef_t;

#define SPI1			((SPI1_RegDef_t*)SPI1_u32_BASE_ADDRESS)

/**************************************************/

#endif
