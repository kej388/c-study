#include <stdio.h>

int main() {
	// �Է��� ���ڿ��� ���� ����
	char str_a[100];
	char ch_a;

	int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
	int i;

	printf("���ڿ��� �Է�(100�� �̳�) : ");
	scanf_s("%s", str_a, 99);

	i = 0;
	do {
		ch_a = str_a[i];

		if (ch_a >= 'A' && ch_a <= 'Z') {
			upper_cnt++;
		}
		if (ch_a >= 'a' && ch_a <= 'z') {
			lower_cnt++;
		}
		if (ch_a >= '0' && ch_a <= '9') {
			digit_cnt++;
		}
		i++;
	} while (ch_a != '\0');

	printf("�빮�� %d��, �ҹ��� %d��, ���� %d��\n", upper_cnt, lower_cnt, digit_cnt);

	// �Է��� ���ڸ�ŭ ��ǥ ����ϱ�
	char str[100];
	char ch;

	int k;
	int star;

	printf("���ڸ� ���� �� �Է� :");
	scanf_s("%s", str, 100);

	i = 0;
	ch = str[i];
	while (ch != '\0') {
		star = (int)ch - 48;

		for (k = 0; k < star; k++) {
			printf("*");
		}
		printf("\n");
		i += 1;
		ch = str[i];
	}
}