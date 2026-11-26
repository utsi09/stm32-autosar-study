/*
 * Dio.c
 *
 * 역할: DIO 드라이버 구현. 하드웨어를 직접 만지는 유일한 곳.
 *       설정 테이블(Dio_Lcfg.c)을 보고 동작하며, 특정 핀 번호를 코드에 직접 쓰지 않는다.
 */

#include "Dio.h"

extern const Dio_ChannelConfigType Dio_ChannelConfig[DIO_CHANNEL_COUNT];

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ct){
    if(ct >= DIO_CHANNEL_COUNT) return STD_LOW;
    GPIO_TypeDef* GPIOx = Dio_ChannelConfig[ct].Port;
    uint16_t GPIO_Pin = Dio_ChannelConfig[ct].Pin;
    GPIO_PinState output = HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);
    if(output == GPIO_PIN_SET) return STD_HIGH;
    else return STD_LOW;
}

void Dio_WriteChannel(Dio_ChannelType ct, Dio_LevelType lt){
    if(ct >= DIO_CHANNEL_COUNT) return;
    GPIO_TypeDef* GPIOx = Dio_ChannelConfig[ct].Port;
    uint16_t GPIO_Pin = Dio_ChannelConfig[ct].Pin;
    GPIO_PinState output;
    if(lt == STD_HIGH) output = GPIO_PIN_SET;
    else output = GPIO_PIN_RESET;
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, output);
}

Dio_LevelType Dio_FlipChannel(Dio_ChannelType ct){
    if(ct >= DIO_CHANNEL_COUNT) return STD_LOW;
    GPIO_TypeDef* GPIOx = Dio_ChannelConfig[ct].Port;
    uint16_t GPIO_Pin = Dio_ChannelConfig[ct].Pin;
    HAL_GPIO_TogglePin(GPIOx, GPIO_Pin);
    GPIO_PinState output = HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);
    if(output == GPIO_PIN_SET) return STD_HIGH;
    else return STD_LOW;
}