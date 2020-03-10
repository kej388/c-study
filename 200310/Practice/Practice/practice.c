#include <stdio.h>
#include <string.h>

int main() {
	/* 1.  3명의 학생 이름, 전화번호를 scanf로 받아서 배열에 저장한 후 출력하시오. */

	char name[3][10];
	int phonenum[3][12];
	int storenum[3][12];
	for (int i = 0; i < 3; i++) {
		printf("%d번째 학생이름을 입력하세요 : ", i + 1);
		scanf_s(" %s", &name[i], 10);
		
		int num = strlen(name[i]);
		for (int j = 0; j < num; j++) {
			name[i][j] = name[i][j];
		}

		printf("%d번째 학생의 전화번호를 입력하세요 : ", i + 1);
		scanf_s("%d", &phonenum[i][12]);
		storenum[i][12] = phonenum[i][12];
	}
	for (int i = 0; i < 3; i++) {
		printf("%d번째 학생의 이름: %s\n %d번째 학생의 전화번호 : %d\n", i + 1, name[i], i + 1, storenum[i][12]);
	}
	
	//2. 1번을 무한반복하다가 x를 입력하면 종료하도록 변경하시오.
	for (int i = 0; ; i++) {

		printf("%d번째 학생이름을 입력하세요 : ", i + 1);
		scanf_s(" %s", &name[i], 10);

		int num = strlen(name[i]);
		for (int j = 0; j < num; j++) {
			name[i][j] = name[i][j];
		}

		if (name[i][0] == 'x') {
			break;
		}

		printf("%d번째 학생의 전화번호를 입력하세요 : ", i + 1);
		scanf_s("%d", &phonenum[i][12]);
		storenum[i][12] = phonenum[i][12];

		printf("%d번째 학생의 이름: %s\n %d번째 학생의 전화번호 : %d\n", i + 1, name[i], i + 1, storenum[i][12]);
	}
	printf("종료되었습니다.");

	//3. 2번을 함수로 구현하세요.

}

	
	





