/*
 * Platform_Types.h
 *
 * 역할: CPU/컴파일러에 따라 달라지는 기본 타입을 AUTOSAR 이름으로 정의한다.
 *       모든 BSW 모듈은 int, char 대신 여기서 정의한 타입만 쓴다.
 * 사양: AUTOSAR_SWS_PlatformTypes
 *
 * TODO
 *  - <stdint.h>를 이용해 uint8, uint16, uint32, sint8, sint16, sint32 정의
 *  - boolean 타입과 TRUE / FALSE 정의
 *  - float32, float64 정의
 */


#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

#include <stdint.h>
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;

typedef int8_t sint8; 
typedef int16_t sint16;
typedef int32_t sint32;

#define TRUE 1
#define FALSE 0
typedef uint8 boolean; 
typedef float float32;
typedef double float64;

#endif /* PLATFORM_TYPES_H */
