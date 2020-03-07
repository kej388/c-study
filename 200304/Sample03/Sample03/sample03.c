#include <stdio.h>

int main() {
	int a, b;
	int result;
	char k;

	printf("첫번째 숫자를 입력해주세요 -> ");
	scanf_s("%d", &a);

	printf("+, -, *, / 중 입력하세요 -> ");
	scanf_s(" %c", &k);

	printf("두번째 숫자를 입력해주세요 -> ");
	scanf_s("%d", &b);

	if (k == '+') {
		result = a + b;
		printf("%d + %d = %d", a, b, result);
	}

	if (k == '-') {
		result = a - b;
		printf("%d - %d = %d", a, b, result);
	}

	if (k == '*') {
		result = a * b;
		printf("%d * %d = %d", a, b, result);
	}

	if (k == '/') {
		if (b != 0) {
			result = a / b;
			printf("%d / %d = %d", a, b, result);
		}
		else {
			printf("0으로 나눌 수 없습니다.");
		}
	}
}