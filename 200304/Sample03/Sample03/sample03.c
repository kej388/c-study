#include <stdio.h>

int main() {
	int a, b;
	int result;
	char k;

	printf("ù��° ���ڸ� �Է����ּ��� -> ");
	scanf_s("%d", &a);

	printf("+, -, *, / �� �Է��ϼ��� -> ");
	scanf_s(" %c", &k);

	printf("�ι�° ���ڸ� �Է����ּ��� -> ");
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
			printf("0���� ���� �� �����ϴ�.");
		}
	}
}