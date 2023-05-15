/****************************************************/
/************ Name    : Mohamed ElFawakhry **********/
/************ Date    : 17/5/2021          **********/
/************ Version  : 1.0v              **********/
/************ SWC  : RCC                   **********/
/****************************************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

#define RCC_u8_HSI		1
#define RCC_u8_HSE		2
#define RCC_u8_PLL		3

#define HALF_HSI		0
#define HALF_HSE		1


#define MRCC_BASE_ADRESS 0x40023800

#define    RCC_CR                  (*((volatile u32*)(MRCC_BASE_ADRESS + 0x00 )))
#define    RCC_PLLCFGR             (*((volatile u32*)(MRCC_BASE_ADRESS + 0x04 )))
#define    RCC_CFGR                (*((volatile u32*)(MRCC_BASE_ADRESS + 0x08 )))
#define    RCC_CIR                 (*((volatile u32*)(MRCC_BASE_ADRESS + 0x0C )))
#define    RCC_AHB1RSTR            (*((volatile u32*)(MRCC_BASE_ADRESS + 0x10 )))
#define    RCC_AHB2RSTR            (*((volatile u32*)(MRCC_BASE_ADRESS + 0x14 )))
#define    RCC_APB1RSTR            (*((volatile u32*)(MRCC_BASE_ADRESS + 0x20 )))
#define    RCC_APB2RSTR            (*((volatile u32*)(MRCC_BASE_ADRESS + 0x24 )))
//#define    AHB1ENR                 (*((volatile u32*)(MRCC_BASE_ADRESS + 0x30 )))
//#define    AHB2ENR                 (*((volatile u32*)(MRCC_BASE_ADRESS + 0x34 )))
//#define    RCC_APB1ENR             (*((volatile u32*)(MRCC_BASE_ADRESS + 0x40 )))
//#define    RCC_APB2ENR             (*((volatile u32*)(MRCC_BASE_ADRESS + 0x44 )))
//#define    RCC_AHB1LPENR           (*((volatile u32*)(MRCC_BASE_ADRESS + 0x50 )))
//#define    RCC_AHB2LPENR           (*((volatile u32*)(MRCC_BASE_ADRESS + 0x54 )))
//#define    RCC_APB1LPENR           (*((volatile u32*)(MRCC_BASE_ADRESS + 0x60 )))
//#define    RCC_APB2LPENR           (*((volatile u32*)(MRCC_BASE_ADRESS + 0x64 )))
//#define    RCC_BDCR                (*((volatile u32*)(MRCC_BASE_ADRESS + 0x70 )))
//#define    RCC_CSR                 (*((volatile u32*)(MRCC_BASE_ADRESS + 0x74 )))
//#define    RCC_SSCGR               (*((volatile u32*)(MRCC_BASE_ADRESS + 0x80 )))
//#define    RCC_PLLI2SCFGR          (*((volatile u32*)(MRCC_BASE_ADRESS + 0x84 )))
//#define    RCC_DCKCFGR             (*((volatile u32*)(MRCC_BASE_ADRESS + 0x8C )))

#endif
