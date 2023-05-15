#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

#include "GPIO_Interface.h"
#include "GPIO_Private.h"
#include "GPIO_Config.h"

void GPIO_voidSetPinMode(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Type)
{
    switch(Copy_u8Type)
    {
        case GPIO_INPUT:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: CLR_BIT(GPIOA_MODER,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOA_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: CLR_BIT(GPIOB_MODER,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOB_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: CLR_BIT(GPIOC_MODER,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOC_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        case GPIO_OUTPUT:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: SET_BIT(GPIOA_MODER,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOA_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: SET_BIT(GPIOB_MODER,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOB_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: SET_BIT(GPIOC_MODER,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOC_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        case GPIO_ALTER:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: CLR_BIT(GPIOA_MODER,(Copy_u8PinID*2));
                                        SET_BIT(GPIOA_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: CLR_BIT(GPIOB_MODER,(Copy_u8PinID*2));
                                        SET_BIT(GPIOB_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: CLR_BIT(GPIOC_MODER,(Copy_u8PinID*2));
                                        SET_BIT(GPIOC_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        case GPIO_ANALOG:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: SET_BIT(GPIOA_MODER,(Copy_u8PinID*2));
                                        SET_BIT(GPIOA_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: SET_BIT(GPIOB_MODER,(Copy_u8PinID*2));
                                        SET_BIT(GPIOB_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: SET_BIT(GPIOC_MODER,(Copy_u8PinID*2));
                                        SET_BIT(GPIOC_MODER,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        default:        break;
    }
}

void GPIO_voidSetPinOutputType(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Type)
{
    switch(Copy_u8Type)
    {
        case PUSH_PULL:
                        switch(Copy_u8PortID)
                        {   
                            case GPIOA: CLR_BIT(GPIOA_OTYPER,Copy_u8PinID);
                                        break;
                            case GPIOB: CLR_BIT(GPIOB_OTYPER,Copy_u8PinID);
                                        break;
                            case GPIOC: CLR_BIT(GPIOC_OTYPER,Copy_u8PinID);
                                        break;
                            default:
                                    break;  
                        }
                        break;
        case OPEN_DRAIN:
                        switch(Copy_u8PortID)
                        {   
                            case GPIOA: SET_BIT(GPIOA_OTYPER,Copy_u8PinID);
                                        break;
                            case GPIOB: SET_BIT(GPIOB_OTYPER,Copy_u8PinID);
                                        break;
                            case GPIOC: SET_BIT(GPIOC_OTYPER,Copy_u8PinID);
                                        break;
                            default:
                                    break;  
                        }
                        break;
        default:
                break;
    }
}
void GPIO_voidSetPinOutputSpeed(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Speed)
{
    switch(Copy_u8Speed)
    {
        case LOW_SPEED:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: CLR_BIT(GPIOA_OSPEEDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOA_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: CLR_BIT(GPIOB_OSPEEDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOB_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: CLR_BIT(GPIOC_OSPEEDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOC_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        case MEDIUM_SPEED:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: SET_BIT(GPIOA_OSPEEDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOA_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: SET_BIT(GPIOB_OSPEEDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOB_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: SET_BIT(GPIOC_OSPEEDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOC_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        case HIGH_SPEED:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: CLR_BIT(GPIOA_OSPEEDR,(Copy_u8PinID*2));
                                        SET_BIT(GPIOA_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: CLR_BIT(GPIOB_OSPEEDR,(Copy_u8PinID*2));
                                        SET_BIT(GPIOB_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: CLR_BIT(GPIOC_OSPEEDR,(Copy_u8PinID*2));
                                        SET_BIT(GPIOC_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        case VERY_HIGH_SPEED:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: SET_BIT(GPIOA_OSPEEDR,(Copy_u8PinID*2));
                                        SET_BIT(GPIOA_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: SET_BIT(GPIOB_OSPEEDR,(Copy_u8PinID*2));
                                        SET_BIT(GPIOB_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: SET_BIT(GPIOC_OSPEEDR,(Copy_u8PinID*2));
                                        SET_BIT(GPIOC_OSPEEDR,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        default:        break;
    }
}
void GPIO_voidSetPinInputPullupOrDown(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value)
{
    switch(Copy_u8Value)
    {
        case NO_PULL:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: CLR_BIT(GPIOA_PUPDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOA_PUPDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: CLR_BIT(GPIOB_PUPDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOB_PUPDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: CLR_BIT(GPIOC_PUPDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOC_PUPDR,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        case PULL_UP:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: SET_BIT(GPIOA_PUPDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOA_PUPDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: SET_BIT(GPIOB_PUPDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOB_PUPDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: SET_BIT(GPIOC_PUPDR,(Copy_u8PinID*2));
                                        CLR_BIT(GPIOC_PUPDR,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        case PULL_DOWN:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: CLR_BIT(GPIOA_PUPDR,(Copy_u8PinID*2));
                                        SET_BIT(GPIOA_PUPDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOB: CLR_BIT(GPIOB_PUPDR,(Copy_u8PinID*2));
                                        SET_BIT(GPIOB_PUPDR,((Copy_u8PinID*2) +1));
                                        break;
                            case GPIOC: CLR_BIT(GPIOC_PUPDR,(Copy_u8PinID*2));
                                        SET_BIT(GPIOC_PUPDR,((Copy_u8PinID*2) +1));
                                        break;
                            default:    break;
                        }
                        break;
        default:        break;
    }
}
u8 GPIO_u8getPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID)
{
    u8 local_u8PinValue;
    switch(Copy_u8PortID)
    {
        case GPIOA: local_u8PinValue = GET_BIT(GPIOA_IDR,Copy_u8PinID);     break;
        case GPIOB: local_u8PinValue = GET_BIT(GPIOB_IDR,Copy_u8PinID);     break;
        case GPIOC: local_u8PinValue = GET_BIT(GPIOC_IDR,Copy_u8PinID);     break;
        default:                                                            break;
    }
    return local_u8PinValue;
}
void GPIO_voidSetPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value)
{
    switch(Copy_u8Value)
    {
        case GPIO_HIGH:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: 
                                        SET_BIT(GPIOA_ODR,Copy_u8PinID);
                                        break;
                            case GPIOB: 
                                        SET_BIT(GPIOB_ODR,Copy_u8PinID);
                                        break;
                            case GPIOC: 
                                        SET_BIT(GPIOC_ODR,Copy_u8PinID);
                                        break;
                            default:
                                    break;
                        }
                        break;
        case GPIO_LOW:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: 
                                        CLR_BIT(GPIOA_ODR,Copy_u8PinID);
                                        break;
                            case GPIOB: 
                                        CLR_BIT(GPIOB_ODR,Copy_u8PinID);
                                        break;
                            case GPIOC: 
                                        CLR_BIT(GPIOC_ODR,Copy_u8PinID);
                                        break;
                            default:
                                    break;
                        }
                        break;
        default:
                break;
    }
}
void GPIO_voidSetPinValueAtomic(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value)
{
    switch(Copy_u8Value)
    {
        case GPIO_HIGH:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: GPIOA_BSRR = (1 << Copy_u8PinID);   break;
                            case GPIOB: GPIOB_BSRR = (1 << Copy_u8PinID);   break;
                            case GPIOC: GPIOC_BSRR = (1 << Copy_u8PinID);   break;
                                        break;
                            default:
                                    break;
                        }
                        break;
        case GPIO_LOW:
                        switch(Copy_u8PortID)
                        {
                            case GPIOA: GPIOA_BSRR = (1 << (Copy_u8PinID + 16));   break;
                            case GPIOB: GPIOB_BSRR = (1 << (Copy_u8PinID + 16));   break;
                            case GPIOC: GPIOC_BSRR = (1 << (Copy_u8PinID + 16));   break;
                                        break;
                            default:
                                    break;
                        }
                        break;
        default:
                break;
    }
}

void GPIO_voidSetPortValue(u8 Copy_u8PortID, u32 Copy_u8Value)
{
	switch(Copy_u8PortID)
	{
	case GPIOA: GPIOA_ODR = Copy_u8Value;	break;
	case GPIOB: GPIOB_ODR = Copy_u8Value;	break;
	case GPIOC: GPIOC_ODR = Copy_u8Value;	break;
	default:								break;
	}
}
