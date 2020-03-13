/*
	전처리기(Preprocessor)
: 컴파일하기 전에 처리

===============
 값을 무자 그대로 상수로 사용
: 리터럴 상수
ex) 10, "hello", 123.1

#define
: 주로 리터럴상수 대신 이름있는 상수를 정의할 때 사용

=====================================================
예약어 (rewerved word)
: 프로그래밍언어에서 이미 사용하고 있는 단어
 → keyword라고도 함
 → 예약어는 변수, 함수등의 이름으로 사용 불가
*/

#include <stdio.h>

#define PI 3.1416928535
#define STR "원의 면적을 계산했습니다.\n"
#define ENG_MSG printf("프로그램이 종료되었습니다.\n\n")

//void myfunc();
//
//void main() {
//	printf("반지름이 10인 원의 면적은 ==> %10. 5f\n", 10 * 10 * PI);
//
//	printf(STR);
//
//	ENG_MSG;
//
//	myfunc();
//	myfunc();
//}
//
//void myfunc() {
//	static int a = 0;
//	a = a + 100;
//	printf("a의 값 ==> %d\n", a);
//}