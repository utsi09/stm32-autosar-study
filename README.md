# stm32-autosar-study

NUCLEO-F746ZG 보드에 AUTOSAR Classic 구조 흉내내서 BSW(MCAL), CDD 직접 짜보는 공부용 레포
HAL 위에 Dio 올리고 그 위에 스텝모터 CDD 올림

```
main.c -> Cdd_Stepper -> Dio(MCAL) -> HAL -> 핀 -> ULN2003 -> 28BYJ-48
```

## 폴더

- `Bsw/Common` : Platform_Types.h, Std_Types.h
- `Bsw/Mcal/Dio` : Dio 드라이버 (Cfg / Lcfg 분리)
- `Bsw/Cdd/Cdd_Stepper` : 스텝모터 CDD

## 한 것

### 11/24
- CubeMX, VS Code 확장, 툴체인 세팅. 빌드/플래시까지 되는거 확인
- 보드 2개 전원 문제로 못쓰고 3번째 보드로 성공 (JP3 점퍼 위치 문제였음)
- HAL로 LED 3개 깜빡이기
- CubeMX에서 스텝모터용 핀 4개 잡고 배선
- AUTOSAR 폴더 구조 뼈대 만들고 Platform_Types.h 작성

### 11/25
- Std_Types.h (E_OK가 0임. 반대로 썼다가 고침)
- Dio_Cfg.h : 채널 이름이랑 번호 정의
- Dio.h : 타입, 서비스 ID, 함수 원형. 사양서 Syntax 칸 보고 옮겨적음
- Dio_Lcfg.c : 채널 번호 -> 포트/핀 변환표 (구조체 배열)
- 집에서도 하려고 깃허브에 푸쉬

### 11/26
- Dio.c : ReadChannel / WriteChannel / FlipChannel 구현
- Dio로 LED 깜빡이는거 보드에서 확인
- Cdd_Stepper : 스텝 순서표 + MainFunction (호출 한번에 한 스텝)
- main에서 HAL_GetTick으로 2ms마다 MainFunction 호출
- 모터 돌아감

## 실수 모음

- C인데 C++ 문법 계속 씀 (pair, 참조 &, .first)
- CMakeLists에 Dio.c 안넣어서 undefined reference
- uint32가 0에서 1 빼면 42억 됨. MainFunction 맨 앞에 0 체크 필수
- 인덱스 뒤로 돌릴때 `(i - 1) % 4` 하면 음수 나옴. `(i + 3) % 4`로 해야됨

## 할 것

- Cdd_Stepper Stop / IsBusy
- 버튼으로 모터 제어
- Dio를 HAL 말고 레지스터(BSRR)로 바꿔보기
- Port, Det
- RTE + SWC 얇게 올리기
- OS 올려서 2ms 태스크로 바꾸기
