#include <stdio.h>

int main() {

	/*1. ����, ����, ���� ������ �Է¹޾Ƽ� ����� ����Ͻÿ�.*/

	int ko, en, math;
	int sum;
	float avg;

	printf("���������� �Է��ϼ��� > ");
	scanf_s("%d", &ko);

	printf("���������� �Է��ϼ��� > ");
	scanf_s("%d", &en);

	printf("���������� �Է��ϼ��� > ");
	scanf_s("%d", &math);

	sum = ko + en + math;
	avg = (float)sum / 3;
	printf("��� : %f\n", avg);

	printf("-----------\n");

	/* 2. ���� a�� ���� ¦��/Ȧ�� �Ǻ��ϱ� */

	int a;

	a = 10;

	if (a % 2 == 1) {
		printf("Ȧ���Դϴ�.");
	}
	else {
		printf("¦���Դϴ�.\n");
	}

	printf("-----------\n");

	/* 3. ���� a�� ���� Ű����� �Է¹޾Ƽ� ¦��/Ȧ�� �Ǻ��ϱ�*/

	printf("a�� ���� �Է��ϼ���");
	scanf_s("%d", &a);

	if (a % 2 == 1) {
		printf("Ȧ���Դϴ�.");
	}
	else {
		printf("¦���Դϴ�.");
	}
}