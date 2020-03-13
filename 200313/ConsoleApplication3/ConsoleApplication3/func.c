#include<stdio.h>

// 외부 전역변수를  사용
extern int a;

void func() {
	printf("extern int a 값 ==> %d\n", a);
}