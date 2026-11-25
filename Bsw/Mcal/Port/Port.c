/*
 * Port.c
 *
 * 역할: PORT 드라이버 구현.
 *
 * TODO
 *  - Port_Init: 설정 배열을 처음부터 끝까지 돌면서 핀을 하나씩 초기화
 *      (GPIO 클럭 켜기 -> 초기 레벨 쓰기 -> 방향/모드 설정 순서를 생각해 볼 것)
 *  - ConfigPtr 가 NULL_PTR 이면 Det_ReportError
 *
 * 참고: Core/Src/main.c 의 MX_GPIO_Init() 이 같은 일을 HAL로 하고 있다.
 */
