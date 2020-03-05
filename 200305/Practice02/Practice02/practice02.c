#include <stdio.h>

int main() {
	/* 1.  국어, 영어 ,수학 점수를 입력받아서 평균을 구한 후 
			90이상이면 A,
	80이상이면 B,
	70이상이면 C,
	60이상이면 D,
	기타 F로 출력하시오. */

	int ko, en, math, sum, avg;

	printf("국어점수를 입력하세요 : ");
	scanf_s("%d", &ko);

	printf("영어점수를 입력하세요 : ");
	scanf_s("%d", &en);

	printf("수학점수를 입력하세요 : ");
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

	//2. 1부터 100까지 홀수만 출력하기

	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}

	printf("\n");

	//3. 1부터 100까지 3의 배수만 출력하기

	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
}