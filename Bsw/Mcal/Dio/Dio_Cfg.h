/*
 * Dio_Cfg.h
 *
 * 역할: 컴파일 시점(pre-compile) 설정. 실제 프로젝트에서는 설정 도구가 생성한다.
 *       "이 ECU에서 DIO를 어떻게 쓸 것인가"만 담고, 동작 코드는 넣지 않는다.
 *
 * TODO
 *  - DIO_DEV_ERROR_DETECT  (STD_ON / STD_OFF): DET 에러 검사를 넣을지
 *  - 채널 심볼 이름 (상위 모듈은 숫자가 아니라 이 이름을 쓴다)
 *      DioConf_DioChannel_LED_GREEN
 *      DioConf_DioChannel_LED_BLUE
 *      DioConf_DioChannel_LED_RED
 *      DioConf_DioChannel_USER_BTN
 *  - 설정된 채널 개수
 */

#ifndef DIO_CFG_H
#define DIO_CFG_H

#include "Std_Types.h"

#define DioConf_DioChannel_STEP_IN1 0
#define DioConf_DioChannel_STEP_IN2 1
#define DioConf_DioChannel_STEP_IN3 2
#define DioConf_DioChannel_STEP_IN4 3

#define DioConf_DioChannel_LED_GREEN 4
#define DioConf_DioChannel_LED_BLUE 5
#define DioConf_DioChannel_LED_RED 6
#define DioConf_DioChannel_USER_BTN 7

#define DIO_CHANNEL_COUNT 8

#define DIO_DEV_ERROR_DETECT STD_OFF



#endif /* DIO_CFG_H */
