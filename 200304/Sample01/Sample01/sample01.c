#include <stdio.h>

int main() {
	int a, b;
	int result;
	int k;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &a);

	printf("���ڸ� �Է��ϼ���\n <1> ���� \n <2> ���� \n <3> ���� \n <4> ������ \n");
	scanf_s("%d", &k);

	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
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