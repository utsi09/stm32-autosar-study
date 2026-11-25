/*
 * Dio_Lcfg.c
 *
 * 역할: 링크 시점(link-time) 설정 데이터. const 테이블만 있고 함수는 없다.
 *       채널 ID를 실제 하드웨어(GPIO 포트, 핀)로 바꿔 주는 표.
 *       보드가 바뀌면 이 파일만 바꾸고 Dio.c는 그대로 둔다.
 *
 * TODO
 *  - 채널 하나를 표현하는 구조체 타입 (포트 주소, 핀 마스크)
 *      -> 타입 선언은 Dio.h 또는 Dio_Cfg.h 어디에 둘지 스스로 정해 볼 것
 *  - 채널 ID 순서대로 채운 const 배열
 *      LED_GREEN = PB0, LED_BLUE = PB7, LED_RED = PB14, USER_BTN = PC13
 */

#include "Dio.h"

const Dio_ChannelConfigType Dio_ChannelConfig[DIO_CHANNEL_COUNT] = {
    {STEP_IN1_GPIO_Port, STEP_IN1_Pin},
    {STEP_IN2_GPIO_Port, STEP_IN2_Pin},
    {STEP_IN3_GPIO_Port, STEP_IN3_Pin},
    {STEP_IN4_GPIO_Port, STEP_IN4_Pin},
    {LD1_GPIO_Port, LD1_Pin},
    {LD2_GPIO_Port, LD2_Pin},
    {LD3_GPIO_Port, LD3_Pin},
    {USER_Btn_GPIO_Port, USER_Btn_Pin},
};
