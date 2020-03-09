#include <stdio.h>

int main() {
	// int a[3] : a는 포인터변수인데 a가 가리키는 곳에는 크기가 3인 int 배열이 있다.

	// 변수의 주소 알아내기
	int a = 100;
	int b = 20;

	printf("변수 a의 주소는 %d\n", &a);
	printf("변수 b의 주소는 %d\n", &b);
	// 포인터 변수 : 메모리주소를 저장하는 변수
	// char* p; : p는 포인터변수인데 p가 가리키는 곳에는 char형이 있다.

	// 일반 변수와 포인터 변수의 관계
	char ch;
	char* p;

	ch = 'A';
	p = &ch;

	printf("ch가 가지고 있는 값 : ch ==> %c\n", ch);
	printf("ch의 주소(address): &ch ==> %d\n", &ch);
	printf("p가 가지고 있는 값 : p ==> %d\n", p);
	printf("p가 가리키는 곳의 실제값 : *p ==> %c\n", *p);

	// 포인터의 관계 이해하기
	char ch01;
	char* p01;
	char* q01;

	ch01 = 'A';
	p01 = &ch01;

	q01 = p01;

	*q01 = 'Z';

	printf("ch가 가지고 있는 값: ch ==> %c\n\n", ch01);

	// 배열의 이름은 포인터다 ★★★
	
	// 정수형 배열의 메모리 할당
	int aa[3] = { 10, 20, 30 };

	printf("aa[0]의 값은 %d, 주소는 %d\n", aa[0], &aa[0]);
	printf("aa[1]의 값은 %d, 주소는 %d\n", aa[1], &aa[1]);
	printf("aa[2]의 값은 %d, 주소는 %d\n", aa[2], &aa[2]);
	printf("배열 이름 aa의 값(=주소)는 %d\n", aa);


}