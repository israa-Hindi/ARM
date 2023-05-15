#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

//RCC -> AHB1 
//base address 0x40023800
#define RCC_BASE_ADDRESS 0x40023800

#define RCC_CR          *((volatile u32*)(RCC_BASE_ADDRESS+0x00))
#define RCC_PLLCFGR     *((volatile u32*)(RCC_BASE_ADDRESS+0x04))
#define RCC_CFGR        *((volatile u32*)(RCC_BASE_ADDRESS+0x08))
#define RCC_AHB1ENR     *((volatile u32*)(RCC_BASE_ADDRESS+0x30))
#define RCC_AHB2ENR     *((volatile u32*)(RCC_BASE_ADDRESS+0x34))
#define RCC_APB1ENR     *((volatile u32*)(RCC_BASE_ADDRESS+0x40))
#define RCC_APB2ENR     *((volatile u32*)(RCC_BASE_ADDRESS+0x44))


#define HSE_CRYSTAL 0
#define HSE_RC      1
#define HSI         2
#define PLL         3

//control REG

//config REG
//pll config REG





#endif
