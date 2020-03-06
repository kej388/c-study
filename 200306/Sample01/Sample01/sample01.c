#include <stdio.h>

int main() {
	// for문을 활용하여 합계 구하기

	int hap = 0;
	int i;

	for (i = 1; i <= 10; i++) {
		hap = hap + i;
	}

	printf("1에서 10까지의 합 : %d\n", hap);

	// for문을 사용한 구구단 프로그램
	int dan;

	printf("몇 단?");
	scanf_s("%d", &dan);

	for (i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", dan, i, dan * i);
	}
}