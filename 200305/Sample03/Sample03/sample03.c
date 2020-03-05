#include <stdio.h>

int main() {

	// if문
	int a = 99;

	if (a < 100) printf("a는 100보다 작다\n"); // 실행이 한 줄인 경우

	// if문의 잘못된 예
	int b = 200;
	
	if (b < 100)
	printf("100보다 작군요..\n"); // 잘못된 예
	printf("거짓이므로 이 문장은 안보이겠죠?\n");

	printf("프로그램 끝!\n");

	// if문의 바른 예

	if (b < 100) {
		printf("100보다 작군요..\n");
		printf("참이면 이 문장도 보이겠죠?\n");
	}
	else {
		printf("100보다 크군요..\n");
		printf("거짓이면 이 문장도 보이겠죠?\n");
	}

	printf("프로그램 끝!\n");

	// 중첩 if문
	int c = 75;

	if (c > 50) {
		if (c < 100) {

			printf("50보다 크고 100보다 작군요..\n");
		}
		else {
			printf("와~~ 100보다 크군요..\n");
		}
	}
	else {
		printf("에게~보다 작군요..\n");
	}

	// 다중 if문
	int d;

	printf("점수 :");
	scanf_s("%d", &d);

	if (d >= 90) {
		printf("A");
	}
	else if (d >= 80) {
		printf("B");
	}
	else if (d >= 70) {
		printf("C");
	}
	else if (d >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}

	printf("학점입니다.\n");

	// switch ~ case 문 예시1
	int e;

	printf("1~4번 중에 선택하세요 : ");
	scanf_s("%d", &e);

	switch (e) {
	case 1 :
		printf("1을 선택하셨습니다.\n");
		break;
	case 2:
		printf("2을 선택하셨습니다.\n");
		break;
	case 3:
		printf("3을 선택하셨습니다.\n");
		break;
	case 4:
		printf("4을 선택하셨습니다.\n");
		break;
	default:
		printf("다른 것을 선택하셨습니다.\n");
	}
	// switch ~ case 문 예시2

	int f;

	printf("1~5번 중에 선택하세요 : ");
	scanf_s("%d", &f);

	switch (f) {
	case 1: case 2: case 3:
		printf("1 or 2 or 3\n");
		break;
	case 4: case 5:
		printf("4 or 5\n");
		break;
	default:
		printf("etc..\n");
	}
	
	// return (: 함수종료)에 대한 예시문 

	char operator;

	scanf_s("%c", &operator);

	if (operator == '+') {
		printf("+\n");
		return;
	}
	if (operator == '-') {
		printf("-\n");
		return;
	}
	if (operator == '*') {
		printf("*\n");
		return;
	}
	if (operator == '/') {
		printf("/\n");
		return; // 함수종료
	}
}