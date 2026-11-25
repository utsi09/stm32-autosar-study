/*
 * Cdd_Button.h
 *
 * 계층: Complex Device Driver (CDD)
 * 역할: 버튼 입력 처리 드라이버의 공개 인터페이스.
 *       표준 BSW에는 "디바운싱 + 짧게/길게 누름 판정" 모듈이 없으므로 CDD로 만든다.
 *       아래로는 MCAL(Dio)을 직접 호출하고, 위로는 SWC가 쓸 API를 제공한다.
 * 참고: AUTOSAR_EXP_CDDDesignAndIntegrationGuideline
 *
 * TODO
 *  - 상태 타입 (예: 안 눌림 / 눌림 / 짧게 누름 발생 / 길게 누름 발생)
 *  - 함수 원형
 *      Cdd_Button_Init
 *      Cdd_Button_MainFunction   (10ms 주기로 호출되는 것을 전제로 설계)
 *      Cdd_Button_GetState
 */
#ifndef CDD_BUTTON_H
#define CDD_BUTTON_H


#endif /* CDD_BUTTON_H */
