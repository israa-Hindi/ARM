/*File Gaurd*/
#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

//typedef struct GPIO
//{
//    volatile u32 MODER;
//    volatile u32 OTYPER;
//    volatile u32 OSPEEDR;
//    volatile u32 PUPDR;
//    volatile u32 IDR;
//    volatile u32 ODR;
//    volatile u32 BSRR;
//    volatile u32 LCKR;
//    volatile
//}GPIOx_t;
//
//#define GPIOA            ((GPIOx_t*)0x40020000)
//#define GPIOB            ((GPIOx_t*)0x40020400)
//#define GPIOC            ((GPIOx_t*)0x40020800)


//GPIO --> AHB1 Bus
//GPIOA Base Address is 0x40020000 
//GPIOB Base Address is 0x40020400 
//GPIOC Base Address is 0x40020800 
#define GPIOA_MODER          *((volatile u32*)0x40020000)
#define GPIOA_OTYPER         *((volatile u32*)0x40020004)
#define GPIOA_OSPEEDR        *((volatile u32*)0x40020008)
#define GPIOA_ODR            *((volatile u32*)0x40020014)
#define GPIOA_BSRR           *((volatile u32*)0x40020018)
#define GPIOA_PUPDR          *((volatile u32*)0x4002000C)
#define GPIOA_IDR            *((volatile u32*)0x40020010)


#define GPIOB_MODER          *((volatile u32*)0x40020400)
#define GPIOB_OTYPER         *((volatile u32*)0x40020404)
#define GPIOB_OSPEEDR        *((volatile u32*)0x40020408)
#define GPIOB_ODR            *((volatile u32*)0x40020414)
#define GPIOB_BSRR           *((volatile u32*)0x40020418)
#define GPIOB_PUPDR          *((volatile u32*)0x4002040C)
#define GPIOB_IDR            *((volatile u32*)0x40020410)


#define GPIOC_MODER          *((volatile u32*)0x40020800)
#define GPIOC_OTYPER         *((volatile u32*)0x40020804)
#define GPIOC_OSPEEDR        *((volatile u32*)0x40020808)
#define GPIOC_ODR            *((volatile u32*)0x40020814)
#define GPIOC_BSRR           *((volatile u32*)0x40020818)
#define GPIOC_PUPDR          *((volatile u32*)0x4002080C)
#define GPIOC_IDR            *((volatile u32*)0x40020810)


#define GPIOA                0
#define GPIOB                1
#define GPIOC                2


#define PIN0                 0 
#define PIN1                 1 
#define PIN2                 2 
#define PIN3                 3 
#define PIN4                 4 
#define PIN5                 5 
#define PIN6                 6 
#define PIN7                 7 
#define PIN8                 8 
#define PIN9                 9 
#define PIN10                10
#define PIN11                11
#define PIN12                12
#define PIN13                13
#define PIN14                14
#define PIN15                15



#define INPUT                0
#define OUTPUT               1
#define AF                   2
#define ANALOG               3

#define OUTPUT_PP            0
#define OUTPUT_OD            1

#define INPUT_Pullup         0
#define INPUT_pulldown       1

#define OUTPUT_LS            0
#define OUTPUT_MS            1
#define OUTPUT_HS            2
#define OUTPUT_VHS           3


#define SET                  0
#define RST                  1
#endif
