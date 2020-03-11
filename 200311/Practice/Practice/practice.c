#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
		1.로또번호생성기 만들기

		1~45까지의 숫자 6개를 중복되지 않게 만들기

		난수,%,배열,for문 사용
*/


// 1) 로또 번호 난수 1 ~ 45까지 생성 함수이용
int lottoNum() {
	return rand() % 45 + 1;
}

int main() {
	int num[6];	// 로또 번호 변수 생성
	int notnum; // 중복 번호 제외 변수 생성
	int i, k;		// for문을 돌리기 위한 변수
	char check = 'N';

	// 2) num 변수에 1 ~ 45까지의 난수 저장
	srand( (unsigned)time(NULL));	// srand()함수는 rand()함수 초기화
	for (i = 0; i < 6; ) {
		notnum = lottoNum();

		// 3) 중복 숫자는 다시
		for (k = 0; k < 6; k++) {
			if (num[k] == notnum) {
				check = 'Y';
			}
		}

		if (check == 'N') {
			num[i++] = notnum;
		}
		else {
			check = 'N';
		}
		
	}

	for (i = 0; i < 6; i++) {
		printf("%d ", num[i]);
	}
	
	printf("\n\n");
	
	
}