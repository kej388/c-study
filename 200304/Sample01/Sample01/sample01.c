#include <stdio.h>

int main() {
	int a, b;
	int result;
	int k;

	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &a);

	printf("숫자를 입력하세요\n <1> 덧셈 \n <2> 뺄셈 \n <3> 곱셈 \n <4> 나눗셈 \n");
	scanf_s("%d", &k);

	printf("두번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &b);

	if (k == 1) {
		result = a + b;
		printf("%d + %d = %d", a, b, result);
	}

	if (k == 2) {
		result = a - b;
		printf("%d - %d = %d", a, b, result);
	}

	if (k == 3) {
		result = a * b;
		printf("%d * %d = %d", a, b, result);
	}

	if (k == 4) {
		result = a / b;
		printf("%d / %d = %d", a, b, result);
	}

	
}