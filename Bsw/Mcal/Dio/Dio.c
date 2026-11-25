/*
 * Dio.c
 *
 * 역할: DIO 드라이버 구현. 하드웨어를 직접 만지는 유일한 곳.
 *       설정 테이블(Dio_Lcfg.c)을 보고 동작하며, 특정 핀 번호를 코드에 직접 쓰지 않는다.
 *
 * TODO
 *  - Dio.h, Det.h, STM32 헤더 include
 *  - Dio_Lcfg.c의 설정 테이블을 extern 으로 참조
 *  - Dio_ReadChannel  : 채널의 현재 레벨을 STD_HIGH / STD_LOW 로 반환
 *  - Dio_WriteChannel : 채널에 레벨 출력
 *  - Dio_FlipChannel  : 레벨을 뒤집고, 뒤집은 뒤의 레벨을 반환
 *  - DIO_DEV_ERROR_DETECT == STD_ON 일 때 잘못된 채널 ID면 Det_ReportError 호출
 *
 * 하드웨어 접근은 HAL(HAL_GPIO_ReadPin 등) 또는 레지스터(GPIOx->IDR, ODR, BSRR) 중 선택.
 */



 