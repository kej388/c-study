#include <stdio.h>

int sum(int* a) {
	return a[0] + a[1];
}

/* 
	함수의 리턴값은 한개이다.
	=> 배열을 리턴할 때는 값이 아니라 배열의 주소(이름)을 리턴한다
*/

int* calc(int a, int b) {
	int result[2];

	result[0] = a + b;
	result[1] = a - b;

	return result;
}

int gugu(int dan) {
	int i;

	for (i = 1; i <= 9; i++) {
		printf("%2d X %2d = %2d\n", dan, i, dan * i);
	}
}

int main() {
	int arr[] = { 100, 200 };

	printf("result : %d\n", sum(arr));
	
	int *result = calc(10, 20);
	printf("result[0] : %d\n result[1] : %d\n", result[0], result[1]);
	
	/*
		1. 코드 재사용(중복방지)
		2. 수정편리
		3. 프로그램을 기능별로 나누어서 구현 입력, 계산, 출력하는 기능을 각각의 함수로 구현 => module화(부품화)
		4. 협업편리
	*/

	// 함수를 이용한 구구단 프로그램 
	int input;

	printf("출력하고 싶은 단을 입력 : ");
	scanf_s("%d", &input);

	gugu(input);
}