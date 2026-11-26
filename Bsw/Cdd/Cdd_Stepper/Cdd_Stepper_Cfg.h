/*
 * Cdd_Stepper_Cfg.h
 *
 * 역할: 스텝 모터 CDD의 설정값.
 *
 * TODO
 *  - 코일 4개에 연결된 Dio 채널 (DioConf_DioChannel_STEP_IN1 ~ IN4)
 *  - MainFunction 호출 주기 (ms). 이 값이 곧 스텝 간격 = 속도.
 *      28BYJ-48 은 2ms 보다 빠르면 못 따라온다.
 *  - 한 바퀴 스텝 수 (1코일 방식 기준 2048)
 */
#ifndef CDD_STEPPER_CFG_H
#define CDD_STEPPER_CFG_H

#include "Dio.h"

#define CYCLE_MS 100
#define ONE_CYCLE_PER_STEP 2048


#endif /* CDD_STEPPER_CFG_H */
