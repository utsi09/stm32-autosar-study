/*
 * Dio.h
 *
 * 계층: MCAL (Microcontroller Abstraction Layer)
 * 역할: DIO 드라이버의 공개 인터페이스. 다른 모듈은 이 파일만 include 한다.
 *       이미 설정된 핀의 "값"을 읽고 쓴다. 핀의 방향/모드 설정은 Port 모듈 담당.
 * 사양: AUTOSAR_SWS_DIODriver 8장 (API specification)
 *
 * TODO
 *  - Std_Types.h, Dio_Cfg.h include
 *  - 타입: Dio_ChannelType, Dio_LevelType, Dio_PortType, Dio_PortLevelType
 *  - 모듈 ID, 서비스 ID (각 API의 번호), DET 에러 코드
 *      예: DIO_E_PARAM_INVALID_CHANNEL_ID
 *  - 함수 원형
 *      Dio_ReadChannel
 *      Dio_WriteChannel
 *      Dio_FlipChannel
 *      (선택) Dio_ReadPort, Dio_WritePort
 */
#ifndef DIO_H
#define DIO_H

#include "Std_Types.h"
#include "Dio_Cfg.h"

typedef uint8 Dio_ChannelType;
typedef uint8 Dio_LevelType;
typedef uint8 Dio_PortType;
typedef uint16 Dio_PortLevelType; //stm보드 포트 1개 > 핀 16개

#define DIO_MODULE_ID 120
#define DIO_READ_CHANNEL_SID 0x00
#define DIO_WRITE_CHANNEL_SID 0x01
#define DIO_E_PARAM_INVALID_CHANNEL_ID 0x0A

Dio_LevelType Dio_ReadChannel(Dio_ChannelType);
void Dio_WriteChannel(Dio_ChannelType, Dio_LevelType);
Dio_LevelType Dio_FlipChannel(Dio_ChannelType);

#endif /* DIO_H */
