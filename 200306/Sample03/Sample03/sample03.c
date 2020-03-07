#include <stdio.h>

int main() {
	// for문 -> while문
	int i = 0;

	while (i < 5) {
		printf("while문을 공부합니다. \n");
		i++;
	}

	// 값을 입력받아서 10보다 작은 범위에서 반복
	int a;

	do {
		scanf_s("%d", &a);
	} while (a < 10);
	
	printf("10보다 큽니다");
	
	// do ~ while 문 활용
	int menu;

	do {
		printf("\n손님 주문하시겠습니까?\n");
		printf("<1> 카페라떼 <2> 카푸치노 <3> 아메리카노 <4> 그만 ==> ");
		scanf_s("%d", &menu);

		switch (menu) {
		case 1: printf("카페라떼 시켰습니다.\n"); break;
		case 2: printf("카푸치노 시켰습니다.\n"); break;
		case 3: printf("아메리카노 시켰습니다.\n"); break;
		case 4: printf("주문하신 커피 준비하겠습니다.\n"); break;
		default: printf("잘못 주문하셨습니다.\n");
		}

	} while (menu != 4);

	// break문
	int hap = 0;
	int b;

	for (b = 1; b <= 100; b++) {
		hap += b;

		if (hap >= 1000) {
			break;
		}
	}
	printf("1 ~ 100의 합에서 최초로 1000이 넘는 위치는? : %d\n", b);

	// continue 문
	hap = 0;
	int c;

	for (c = 1; c <= 100; c++) {
		if (c % 3 == 0) {
			continue;
		}
		hap += c;
	}

	printf("1~100까지의 합(3의 배수 제외): %d\n", hap);

	/* return
		1. 함수종료 
			return;
		2. 함수의 반환값을 보내는데 사용
			return 0;
	*/

}