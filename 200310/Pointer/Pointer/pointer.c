#include <stdio.h>

int main() {
	/*
		int aa[3] = { 10, 20, 30 };
		a + 0
		a + 1
		a + 2
		a + 3

		a + i

		배열의 요소를 구하는 방법
		a[i] == *(a+i)
		
		배열의 요소의 주소를 구하는 방법
		&a[i] == a + i
	*/
	int a = 10; 

	printf("a의 주소 : %p\n", &a);

	int* p;
	p = &a;
	printf("p의 값 : %p\n", p);
	printf("p가 가리키는 내용 : %d\n", *p);
	printf("p의 주소: %p\n", &p);

	//배열
	int b[3] = { 10, 20, 30 };
	printf("b의 값 : %p\n", b);
	printf("b가 가리키는 내용 : %d\n", *b);
	printf("b가 가리키는 내용 : %d\n", *(b + 0));
	printf("b의 첫번째 요소 : %d\n", b[0]);
	printf("b의 두번째 요소 : %d\n", b[1]);
	printf("b의 두번째 요소 : %d\n", *(b + 1));
	printf("b의 첫번째 요소의 주소 : %p\n", &b[0]);
	printf("b의 첫번째 요소의 주소 : %p\n", b + 0);

	for (int i = 0; i < 3; i++) {
		printf("b[i] : %d\n", b[i]);
		printf("*(b + i) : %d\n", *(b + i));
	}
}
