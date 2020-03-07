#include <stdio.h>

int main() {

	/*1. 국어, 영어, 수학 점수를 입력받아서 평균을 출력하시오.*/

	int ko, en, math;
	int sum;
	float avg;

	printf("국어점수를 입력하세요 > ");
	scanf_s("%d", &ko);

	printf("영어점수를 입력하세요 > ");
	scanf_s("%d", &en);

	printf("수학점수를 입력하세요 > ");
	scanf_s("%d", &math);

	sum = ko + en + math;
	avg = (float)sum / 3;
	printf("평균 : %f\n", avg);

	printf("-----------\n");

	/* 2. 정수 a의 값을 짝수/홀수 판별하기 */

	int a;

	a = 10;

	if (a % 2 == 1) {
		printf("홀수입니다.");
	}
	else {
		printf("짝수입니다.\n");
	}

	printf("-----------\n");

	/* 3. 정수 a의 값을 키보드로 입력받아서 짝수/홀수 판별하기*/

	printf("a의 값을 입력하세요");
	scanf_s("%d", &a);

	if (a % 2 == 1) {
		printf("홀수입니다.");
	}
	else {
		printf("짝수입니다.");
	}
}