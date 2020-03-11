/*
	C언어에서 난수 구할 때 seed가 필요
	
	seed는 난수를 구하기 위해 필요한 기본값(?)
	seed가 바뀌면 난수도 바뀜
	seed로 time(시간)을 주로 사용
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getNumber() {
	return rand() % 45 + 1;
}

int main() {
	short int lotto[6] = { 0, };
	int i, k, num;
	char dup = 'N';

	printf("** 로또 추첨을 시작합니다. **\n\n");
	srand((unsigned)time(NULL));
}