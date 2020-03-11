#include <stdio.h>
#include <string.h>

char name[10][10];
char namefunc(int i) {
	
	printf("%d번째 학생이름을 입력하세요 : ", i + 1);
	scanf_s(" %s", &name[i], 10);

	int num = strlen(name[i]);
	for (int j = 0; j < num; j++) {
		name[i][j] = name[i][j];
	}

	if (name[i][0] == 'x') {
		return 0;
	}

	return name[i];
}

int phonefunc(int i) {
	int phonenum[3][12];
	int storenum[3][12];
	printf("%d번째 학생의 전화번호를 입력하세요 : ", i + 1);
	scanf_s("%d", &phonenum[i][12]);
	phonenum[i][12];

	
	return phonenum[i][12];
}

int main() {
	char sname[10];
	int i = 0;
	while (1) {
		sname[i] = namefunc(i);
		
		int sphone = phonefunc(i);
		if (sname[i] == 0) {
			break;
		}
		printf("%d번째 학생의 이름: %s\n ", i + 1, sname);
		printf("%d번째 학생의 전화번호: %d\n ", i + 1, sphone);
		i++;
	}
	printf("종료되었습니다.");
}