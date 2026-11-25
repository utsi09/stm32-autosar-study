/*
 * Port_PBcfg.c
 *
 * 역할: 포스트빌드(post-build) 설정 데이터. Port_Init 에 넘겨줄 const 설정 구조체.
 *       "어느 핀을 어떤 방향/모드/초기값으로 둘 것인가"의 표.
 *
 * TODO
 *  - 핀별 설정 배열 (LED 3개는 출력 + 초기값 LOW, 버튼은 입력)
 *  - 이 배열을 가리키는 const Port_ConfigType 변수 (main 에서 &변수 를 Port_Init 에 전달)
 */
