#include <stdio.h>

int main() {
	/* 1.  ����, ���� ,���� ������ �Է¹޾Ƽ� ����� ���� �� 
			90�̻��̸� A,
	80�̻��̸� B,
	70�̻��̸� C,
	60�̻��̸� D,
	��Ÿ F�� ����Ͻÿ�. */

	int ko, en, math, sum, avg;

	printf("���������� �Է��ϼ��� : ");
	scanf_s("%d", &ko);

	printf("���������� �Է��ϼ��� : ");
	scanf_s("%d", &en);

	printf("���������� �Է��ϼ��� : ");
	scanf_s("%d", &math);

	sum = ko + en + math;
	avg = sum / 3;

	avg = avg / 10;

	switch (avg) {
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
	}

	//2. 1���� 100���� Ȧ���� ����ϱ�

	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}

	printf("\n");

	//3. 1���� 100���� 3�� ����� ����ϱ�

	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
}