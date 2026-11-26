/*
 * Cdd_Stepper.h
 *
 * 계층: Complex Device Driver (CDD)
 * 역할: 28BYJ-48 스텝 모터(ULN2003 드라이버)의 공개 인터페이스.
 *       표준 BSW에 스텝 모터 모듈이 없고 스텝 간격 타이밍이 중요하므로 CDD로 만든다.
 *       아래로는 Dio 만 호출한다.
 */


#ifndef CDD_STEPPER_H
#define CDD_STEPPER_H

#include "Platform_Types.h"
#include "Std_Types.h"
#include "Cdd_Stepper_Cfg.h"

typedef enum{
    CDD_STEPPER_CW,
    CDD_STEPPER_CCW
} Cdd_Stepper_DirectionType;

void Cdd_Stepper_Init();
void Cdd_Stepper_Move(uint32, Cdd_Stepper_DirectionType);
void Cdd_Stepper_Stop();
boolean Cdd_Stepper_IsBusy();
void Cdd_Stepper_MainFunction();


#endif /* CDD_STEPPER_H */
