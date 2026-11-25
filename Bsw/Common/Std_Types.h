/*
 * Std_Types.h
 *
 * 역할: 모든 BSW 모듈이 공통으로 쓰는 표준 타입과 상수.
 *       각 모듈의 헤더는 가장 먼저 이 파일을 include 한다.
 * 사양: AUTOSAR_SWS_StandardTypes
 *
 * TODO
 *  - Platform_Types.h include
 *  - Std_ReturnType 타입, E_OK / E_NOT_OK
 *  - STD_HIGH / STD_LOW       (핀의 물리 레벨)
 *  - STD_ON / STD_OFF         (기능 켜기/끄기 설정값)
 *  - STD_ACTIVE / STD_IDLE
 *  - NULL_PTR
 */

#ifndef STD_TYPES_H
#define STD_TYPES_H //중복방지

#include "Platform_Types.h"

typedef uint8 Std_ReturnType;

#define E_OK 0
#define E_NOT_OK 1

#define STD_HIGH 1

#define STD_LOW 0

#define STD_ON 1

#define STD_OFF 0

#define STD_ACTIVE 1

#define STD_IDLE 0

#define NULL_PTR ((void*) 0)

#endif /* STD_TYPES_H */
