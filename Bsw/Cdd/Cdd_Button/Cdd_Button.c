/*
 * Cdd_Button.c
 *
 * 역할: 버튼 CDD 구현.
 *
 * TODO
 *  - 내부 상태 변수 (static): 현재 상태, 눌린 시간 카운터 등
 *  - Cdd_Button_Init         : 상태 변수 초기화
 *  - Cdd_Button_MainFunction : Dio_ReadChannel 로 버튼을 읽고 상태 머신을 한 단계 진행
 *  - Cdd_Button_GetState     : 현재 상태 반환
 *
 * 규칙: 여기서는 HAL이나 레지스터를 직접 쓰지 않는다. 하드웨어 접근은 Dio 를 통해서만.
 *       HAL_Delay 같은 블로킹 대기도 쓰지 않는다 (주기 호출 횟수로 시간을 센다).
 */
