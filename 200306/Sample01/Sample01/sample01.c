#include <stdio.h>

int main() {
	// for���� Ȱ���Ͽ� �հ� ���ϱ�

	int hap = 0;
	int i;

	for (i = 1; i <= 10; i++) {
		hap = hap + i;
	}

	printf("1���� 10������ �� : %d\n", hap);

	// for���� ����� ������ ���α׷�
	int dan;

	printf("�� ��?");
	scanf_s("%d", &dan);

	for (i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", dan, i, dan * i);
	}
}