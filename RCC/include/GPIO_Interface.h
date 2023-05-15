/*File Gaurd*/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

/*Functions Prototypes*/
void GPIO_voidSetPinMode(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Mode);
void GPIO_voidSetPinType(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Type);
void GPIO_voidSetPinSpeed(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Speed);
void GPIO_voidSetPinPullState(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8PullState);
void GPIO_voidSetPinValueNonAtomic(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Value);
void GPIO_voidSetPinValueAtomic(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8SenseLevel);
void GPIO_u8GetPinValue(u8 Copy_u8PortId, u8 Copy_u8PinId,u8 * Copy_pu8ReturnedPinValue);

#endif
