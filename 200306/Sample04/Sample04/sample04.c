#include <stdio.h>

int main() {
	// 입력한 문자열의 종류 구분
	char str_a[100];
	char ch_a;

	int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
	int i;

	printf("문자열을 입력(100자 이내) : ");
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

	printf("대문자 %d개, 소문자 %d개, 숫자 %d개\n", upper_cnt, lower_cnt, digit_cnt);

	// 입력한 숫자만큼 별표 출력하기
	char str[100];
	char ch;

	int k;
	int star;

	printf("숫자를 여러 개 입력 :");
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