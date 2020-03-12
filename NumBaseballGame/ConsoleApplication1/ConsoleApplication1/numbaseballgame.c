#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 컴퓨터 3개의 난수 생성함수
int computer() {
	return rand() % 9 + 1;
}

int main() {
	// 1. 컴퓨터가 3개의 난수를 생성한다. (함수)
	// 2. 3개의 난수 중 중복 x
	int cptnum[3];															// 3개의 난수를 받을 배열 생성
	int c;																	// 난수값을 받을 변수
	int usernum[3];															// 사용자가 입력하여 저장할 변수
	char answer;

	srand((unsigned)time(NULL));

	for (;;) {
		for (int i = 0; i < 3; ) {
			char check = 'N';													// 중복검사 변수의 초기화 = 'N'
			c = computer();

			for (int k = 0; k < i + 1; k++) {
				if (cptnum[k] == c) {
					check = 'Y';
				}
			}

			if (check == 'N') {
				cptnum[i++] = c;
			}
			else {
				continue;
			}

		}
		printf("컴퓨터가 입력한 숫자 :");
		for (int i = 0; i < 3; i++) {
			printf("%d ", cptnum[i]);
		}
		printf("\n");
		// 3) 사용자가 3개의 숫자 입력

		printf("3개의 숫자를 입력하세요\n");
		printf("중도 포기를 하시려면 0을 누르세요.");

		
		for (;;) {
			int s = 0;
			int b = 0;
			for (int i = 0; i < 3; i++) {
				scanf_s("%d", &usernum[i]);
				
				
				if (usernum[0] == 0) {
					printf("숫자야구게임을 종료합니다.");
					return 0;
				}
				
			}

			printf("사용자가 입력한 숫자는 : ");
			for (int i = 0; i < 3; i++) {
				printf("%d ", usernum[i]);
			}
			printf("\n");
			// 4) 컴퓨터의 3개의 난수와 사용자가 입력한 3개의 숫자가 맞는지 확인하고 s: b: 로 출력

			if (cptnum[0] == usernum[0]) {
				s += 1;
			}
			else if (cptnum[0] == usernum[1] || cptnum[0] == usernum[2]) {
				b += 1;
			}

			if (cptnum[1] == usernum[1]) {
				s += 1;
			}
			else if (cptnum[1] == usernum[0] || cptnum[1] == usernum[2]) {
				b += 1;
			}

			if (cptnum[2] == usernum[2]) {
				s += 1;
			}
			else if (cptnum[2] == usernum[0] || cptnum[2] == usernum[1]) {
				b += 1;
			}

			printf("s : %d, b: %d\n", s, b);

			
			if (s == 3) {
				printf("축하합니다!");
				printf("다시 도전하시겠습니까?(Y or N)");
				break;
			} 
			
		}
		scanf_s(" %c", &answer, 1);
		if (answer == 'N') {
			printf("종료합니다.");
			return 0;
		}
	}
}