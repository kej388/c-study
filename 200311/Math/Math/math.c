/*
	C언어에서 난수 구할 때 seed가 필요

	seed는 난수를 구하기 위해 필요한 기본값(?)
	seed가 바뀌면 난수도 바뀜
	seed로 time(시간)을 주로 사용
*/

#include <stdio.h>		
#include <stdlib.h>		// 난수
#include <time.h>		// 시간

int getNumber() {		// 1 ~ 45까지 중에서 숫자 하나를 추출하는 함수
	return rand() % 45 + 1; // rand() 함수는 0 ~ 32767 중 하나를 임의로 반환
}

int main() {
	short int lotto[6] = { 0, };	// 추첨된 숫자를 담을 배열
	int i, k, num;
	char dup = 'N';

	printf("** 로또 추첨을 시작합니다. **\n\n");
	srand((unsigned)time(NULL));

	for (i = 0; i < 6; ) {
		num = getNumber();

		for (k = 0; k < 6; k++) {
			if (lotto[k] == num)
				dup = 'Y';
		}
		if (dup == 'N')
			lotto[i++] = num;
		else
			dup = 'N';
	}

	printf("추첨된 로또 번호 ==> ");
	for (i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
	}

	printf("\n\n");
}