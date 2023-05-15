#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

#define GPIOA   0
#define GPIOB   1
#define GPIOC   2

#define GPIO_INPUT   0
#define GPIO_OUTPUT  1
#define GPIO_ALTER   2
#define GPIO_ANALOG  3

#define PUSH_PULL   0
#define OPEN_DRAIN  1

#define LOW_SPEED            0
#define MEDIUM_SPEED         1
#define HIGH_SPEED           2
#define VERY_HIGH_SPEED      3

#define NO_PULL      0
#define PULL_UP      1
#define PULL_DOWN    2

#define GPIO_HIGH   1
#define GPIO_LOW    0

void GPIO_voidSetPinMode(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Type);
void GPIO_voidSetPinOutputType(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Type);
void GPIO_voidSetPinOutputSpeed(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Speed);
void GPIO_voidSetPinInputPullupOrDown(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value);
u8 GPIO_u8getPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID);
void GPIO_voidSetPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value);
void GPIO_voidSetPinValueAtomic(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value);

void GPIO_voidSetPortValue(u8 Copy_u8PortID, u32 Copy_u8Value);




#endif
