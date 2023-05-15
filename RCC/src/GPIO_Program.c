#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "../include/GPIO_Interface.h"
#include "../include/GPIO_Private.h"
#include "../include/GPIO_Config.h"

/*Copy_u8PortId: GPIOA, GPIOB, GPIOC*/
/*Copy_u8PinId: PIN0-_PIN15*/
/*Copy_u8Mode: INPUT, OUTPUT, AF, ANALOG*/
void GPIO_voidSetPinMode(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Mode)
{
    /*i/p validation*/
    if((Copy_u8PortId > GPIOC) || (Copy_u8PinId > PIN15))
    {
        /*Do Nothing*/
    }
    else
    {
        switch(Copy_u8Mode)
        {
            case INPUT:     switch(Copy_u8PortId)
                            {
                                case GPIOA:  CLR_BIT(GPIOA_MODER, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOA_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOB:  CLR_BIT(GPIOB_MODER, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOB_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOC:  CLR_BIT(GPIOC_MODER, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOC_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                default:	break;
                            }
                            break;
            case OUTPUT:    switch(Copy_u8PortId)
                            {
                                case GPIOA:  SET_BIT(GPIOA_MODER, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOA_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOB:  SET_BIT(GPIOB_MODER, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOB_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOC:  SET_BIT(GPIOC_MODER, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOC_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                default:     break;
                            }
                            break;
            case AF:        switch(Copy_u8PortId)
                            {
                                case GPIOA:  CLR_BIT(GPIOA_MODER, (Copy_u8PinId*2));
                                             SET_BIT(GPIOA_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOB:  CLR_BIT(GPIOB_MODER, (Copy_u8PinId*2));
                                             SET_BIT(GPIOB_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOC:  CLR_BIT(GPIOC_MODER, (Copy_u8PinId*2));
                                             SET_BIT(GPIOC_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                default:     break;
                            }
                            break;
            case ANALOG:    switch(Copy_u8PortId)
                            {
                                case GPIOA:  SET_BIT(GPIOA_MODER, (Copy_u8PinId*2));
                                             SET_BIT(GPIOA_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOB:  SET_BIT(GPIOB_MODER, (Copy_u8PinId*2));
                                             SET_BIT(GPIOB_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOC:  SET_BIT(GPIOC_MODER, (Copy_u8PinId*2));
                                             SET_BIT(GPIOC_MODER, ((Copy_u8PinId*2)+1));
                                             break;
                                default:     break;
                            }
                            break;
            default:        break;
        }
    }
}

/*Copy_u8PortId: GPIOA, GPIOB, GPIOC*/
/*Copy_u8PinId: PIN0-_PIN15*/
/*Copy_u8Type: OUTPUT_PP, OUTPUT_OD*/
void GPIO_voidSetPinType(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Type)
{
    /*i/p validation*/
    if((Copy_u8PortId > GPIOC) || (Copy_u8PinId > PIN15))
    {
        /*Do Nothing*/
    }
    else
    {
        switch(Copy_u8Type)
        {
            case OUTPUT_PP: switch(Copy_u8PortId)
                            {
                                case GPIOA:  CLR_BIT(GPIOA_OTYPER, (Copy_u8PinId));
                                             break;
                                case GPIOB:  CLR_BIT(GPIOB_OTYPER, (Copy_u8PinId));
                                             break;
                                case GPIOC:  CLR_BIT(GPIOC_OTYPER, (Copy_u8PinId));
                                             break;
                                default:     break;
                            }
                            break;
            case OUTPUT_OD: switch(Copy_u8PortId)
                            {
                                case GPIOA:  SET_BIT(GPIOA_OTYPER, (Copy_u8PinId));
                                             break;
                                case GPIOB:  SET_BIT(GPIOB_OTYPER, (Copy_u8PinId));
                                             break;
                                case GPIOC:  SET_BIT(GPIOC_OTYPER, (Copy_u8PinId));
                                             break;
                                default:     break;
                            }
                            break;
            default:        break;
        }
    }
}

/*Copy_u8PortId: GPIOA, GPIOB, GPIOC*/
/*Copy_u8PinId: PIN0-_PIN15*/
/*Copy_u8Type: OUTPUT_LS, OUTPUT_MS, OUTPUT_HS, OUTPUT_VHS*/
void GPIO_voidSetPinSpeed(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Speed)
{
    /*i/p validation*/
    if((Copy_u8PortId > GPIOC) || (Copy_u8PinId > PIN15))
    {
        /*Do Nothing*/
    }
    else
    {
        switch(Copy_u8Speed)
        {
            case OUTPUT_LS:     switch(Copy_u8PortId)
                            {
                                case GPIOA:  CLR_BIT(GPIOA_OSPEEDR, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOA_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOB:  CLR_BIT(GPIOB_OSPEEDR, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOB_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOC:  CLR_BIT(GPIOC_OSPEEDR, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOC_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                default:     break;
                            }
                            break;
            case OUTPUT_MS:    switch(Copy_u8PortId)
                            {
                                case GPIOA:  SET_BIT(GPIOA_OSPEEDR, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOA_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOB:  SET_BIT(GPIOB_OSPEEDR, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOB_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOC:  SET_BIT(GPIOC_OSPEEDR, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOC_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                default:     break;
                            }
                            break;
            case OUTPUT_HS:        switch(Copy_u8PortId)
                            {
                                case GPIOA:  CLR_BIT(GPIOA_OSPEEDR, (Copy_u8PinId*2));
                                             SET_BIT(GPIOA_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOB:  CLR_BIT(GPIOB_OSPEEDR, (Copy_u8PinId*2));
                                             SET_BIT(GPIOB_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOC:  CLR_BIT(GPIOC_OSPEEDR, (Copy_u8PinId*2));
                                             SET_BIT(GPIOC_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                default:     break;
                            }
                            break;
            case OUTPUT_VHS:    switch(Copy_u8PortId)
                            {
                                case GPIOA:  SET_BIT(GPIOA_OSPEEDR, (Copy_u8PinId*2));
                                             SET_BIT(GPIOA_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOB:  SET_BIT(GPIOB_OSPEEDR, (Copy_u8PinId*2));
                                             SET_BIT(GPIOB_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOC:  SET_BIT(GPIOC_OSPEEDR, (Copy_u8PinId*2));
                                             SET_BIT(GPIOC_OSPEEDR, ((Copy_u8PinId*2)+1));
                                             break;
                                default:     break;
                            }
                            break;

            default:        break;
        }
    }
}

void GPIO_voidSetPinPullState(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8PullState)
{
    {
    /*i/p validation*/
    if((Copy_u8PortId > GPIOC) || (Copy_u8PinId > PIN15))
    {
        /*Do Nothing*/
    }
    else
    {
        switch(Copy_u8PullState)
        {
            case INPUT_Pullup: switch(Copy_u8PortId)
                            {
                                case GPIOA:  SET_BIT(GPIOA_PUPDR, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOA_PUPDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOB:  SET_BIT(GPIOA_PUPDR, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOA_PUPDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOC:  SET_BIT(GPIOA_PUPDR, (Copy_u8PinId*2));
                                             CLR_BIT(GPIOA_PUPDR, ((Copy_u8PinId*2)+1));
                                             break;
                                default:     break;
                            }

                            break;
            case INPUT_pulldown : switch(Copy_u8PortId)
                            {
                                case GPIOA:  CLR_BIT(GPIOA_PUPDR, (Copy_u8PinId*2));
                                             SET_BIT(GPIOA_PUPDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOB:  CLR_BIT(GPIOA_PUPDR, (Copy_u8PinId*2));
                                             SET_BIT(GPIOA_PUPDR, ((Copy_u8PinId*2)+1));
                                             break;
                                case GPIOC:  CLR_BIT(GPIOA_PUPDR, (Copy_u8PinId*2));
                                             SET_BIT(GPIOA_PUPDR, ((Copy_u8PinId*2)+1));
                                             break;
                                default:     break;
                            }
                            break;

            default:        break;
        }
    }
}

}

void GPIO_voidSetPinValueNonAtomic(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Value)
{

    /*i/p validation*/
    if((Copy_u8PortId > GPIOC) || (Copy_u8PinId > PIN15))
    {
        /*Do Nothing*/
    }
    else
    {
        switch(Copy_u8Value)
        {
            case SET:   switch(Copy_u8PortId)
                        {
                            case GPIOA: SET_BIT(GPIOA_ODR,Copy_u8PinId);
                                      break;
                            case GPIOB: SET_BIT(GPIOA_ODR,Copy_u8PinId);
                                      break;
                            case GPIOC: SET_BIT(GPIOA_ODR,Copy_u8PinId);
                                      break;
                        }

                        break;

            case RST:   switch(Copy_u8PortId)
                        {
                            case GPIOA: CLR_BIT(GPIOA_ODR,Copy_u8PinId);
                                      break;
                            case GPIOB: CLR_BIT(GPIOA_ODR,Copy_u8PinId);
                                      break;
                            case GPIOC: CLR_BIT(GPIOA_ODR,Copy_u8PinId);
                                      break;
                        }
                        break;
            default:
                        break;
        }
    }

    }
    void GPIO_u8GetPinValue(u8 Copy_u8PortId, u8 Copy_u8PinId,u8 * Copy_pu8ReturnedPinValue)
    {
        if((Copy_u8PortId > GPIOC) || (Copy_u8PinId > 15))
        {
            /*Do Nothing*/
        }
        else
        {
            switch(Copy_u8PortId)
            {
                case GPIOA: *Copy_pu8ReturnedPinValue=GET_BIT(GPIOA_IDR, Copy_u8PinId);
                	 break;
                case GPIOB: *Copy_pu8ReturnedPinValue=GET_BIT(GPIOB_IDR, Copy_u8PinId);
                            break;
                case GPIOC: *Copy_pu8ReturnedPinValue=GET_BIT(GPIOC_IDR, Copy_u8PinId);
                            break;
                default:
                            break;
            }
        }
    }

void GPIO_voidSetPinValueAtomic(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8SenseLevel)
{
    if((Copy_u8PortId > GPIOC) || (Copy_u8PinId > 15))
    {
        /*Do Nothing*/
    }
    else
    {
        switch(Copy_u8SenseLevel)
        {
            case SET:   switch(Copy_u8PortId)
                        {
                            case GPIOA: GPIOA_BSRR = (1<<Copy_u8PinId);
                                  break;
                            case GPIOB: GPIOB_BSRR = (1<<Copy_u8PinId);
                                  break;
                            case GPIOC: GPIOC_BSRR = (1<<Copy_u8PinId);
                                  break;
                        }
                        break;

            case RST:   switch(Copy_u8PortId)
                        {
                            case GPIOA: GPIOA_BSRR = (1<<(Copy_u8PinId+16));
                                        break;
                            case GPIOB: GPIOB_BSRR = (1<<(Copy_u8PinId+16));
                                        break;
                            case GPIOC: GPIOC_BSRR = (1<<(Copy_u8PinId+16));
                                        break;
                        }
                        break;
            default:
                        break;
        }
    }
}


