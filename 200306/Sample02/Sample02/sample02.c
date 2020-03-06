#include <stdio.h>

int main() {
	// 중첩 for문을 사용
	int i, k;

	for (i = 2; i <= 9; i++) {
		for (k = 1; k <= 9; k++) {
			printf("%d X %d = %d\n", i, k, i * k);
		}
		printf("\n");
	}

	// 다양한 for문의 활용
	i = 0;
	for (; ; ) {
		printf("%d\n", i);
		i++;
	} // ctrl + c 를 누르면 멈춤 
	// 또다른 방법 : flag를 이용한다 (프로그래밍에서 참, 거짓을 판단하는데 사용되는 변수를 Flag라고 함)

	// Flag를 이용한 무한루프
	int a;

	for ( ; ; ) {
		scanf_s("%d", &a);
		// 무한 루프 탈출 조건
		if (a == -1) {
			break; // for문 종료
		}
		printf("%d\n", a);
	}
}