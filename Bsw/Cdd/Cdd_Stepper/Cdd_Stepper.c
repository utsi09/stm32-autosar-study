/*
 * Cdd_Stepper.c
 *
 * 역할: 스텝 모터 CDD 구현.
 *
 * TODO
 *  - 스텝 순서표: 4행 x 4열 const 배열 (각 행 = 한 스텝에서 IN1~IN4 의 레벨)
 *  - 내부 상태 (static): 현재 순서표 위치(0~3), 남은 스텝 수, 방향
 *  - Cdd_Stepper_Init         : 상태 초기화, 코일 4개 모두 LOW
 *  - Cdd_Stepper_Move         : 남은 스텝 수와 방향 저장
 *  - Cdd_Stepper_MainFunction : 남은 스텝이 있으면
 *                                 순서표 위치를 방향에 따라 +1 / -1 (0~3 범위에서 순환)
 *                                 그 행의 값으로 Dio_WriteChannel 4번
 *                                 남은 스텝 수 -1
 *                               다 돌았으면 코일을 모두 LOW (발열 방지)
 *
 * 규칙: HAL이나 레지스터를 직접 쓰지 않는다. HAL_Delay 도 쓰지 않는다.
 */


 /// @brief 내부 상태를 초기화하고 코일 4개를 모두 LOW로 만든다
 void Cdd_Stepper_Init(void){




    return;
 }

