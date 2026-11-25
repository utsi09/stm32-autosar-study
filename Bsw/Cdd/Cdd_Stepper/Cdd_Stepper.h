/*
 * Cdd_Stepper.h
 *
 * 계층: Complex Device Driver (CDD)
 * 역할: 28BYJ-48 스텝 모터(ULN2003 드라이버)의 공개 인터페이스.
 *       표준 BSW에 스텝 모터 모듈이 없고 스텝 간격 타이밍이 중요하므로 CDD로 만든다.
 *       아래로는 Dio 만 호출한다.
 *
 * TODO
 *  - Std_Types.h, Cdd_Stepper_Cfg.h include
 *  - 방향 타입 (정방향 / 역방향)
 *  - 함수 원형
 *      Cdd_Stepper_Init
 *      Cdd_Stepper_Move(스텝 수, 방향)   : 이동 명령만 등록하고 바로 리턴
 *      Cdd_Stepper_Stop
 *      Cdd_Stepper_IsBusy                : 아직 도는 중인지
 *      Cdd_Stepper_MainFunction          : 주기 호출. 한 번에 한 스텝만 진행
 */
#ifndef CDD_STEPPER_H
#define CDD_STEPPER_H


#endif /* CDD_STEPPER_H */
