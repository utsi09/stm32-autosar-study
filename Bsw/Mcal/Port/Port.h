/*
 * Port.h
 *
 * 계층: MCAL
 * 역할: PORT 드라이버의 공개 인터페이스. 핀의 방향, 모드(GPIO/대체기능), 초기 레벨,
 *       풀업/풀다운을 설정한다. 부팅 때 한 번 Port_Init 으로 보드 전체 핀을 초기화한다.
 *       지금은 CubeMX가 만든 MX_GPIO_Init() 이 이 일을 하고 있다.
 * 사양: AUTOSAR_SWS_PortDriver 8장
 *
 * TODO
 *  - 타입: Port_PinType, Port_PinDirectionType (PORT_PIN_IN / PORT_PIN_OUT),
 *          Port_PinModeType, Port_ConfigType (핀 설정 배열과 개수)
 *  - 함수 원형
 *      Port_Init(const Port_ConfigType* ConfigPtr)
 *      (선택) Port_SetPinDirection
 */
#ifndef PORT_H
#define PORT_H


#endif /* PORT_H */
