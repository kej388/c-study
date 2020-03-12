#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main() {
	// 포인터 배열의 사용 예
	char* p[3];				// 세 칸의 포인터 배열 선언
	char imsi[100];			// 입력값을 저장할 임시 공간 배열
	int i, size;

	for (i = 0; i < 3; i++) {
		printf("%d번째문자열 : ", i + 1);
		gets_s(imsi, 100);	// 임시 공간에 문자열을 입력

		size = strlen(imsi);	// 문자열의 길이
		p[i] = (char*)malloc((sizeof(char) * size) + 1);	// 입력한 길이 + 1 크기의 메모리를 확보

		strcpy_s(p[i], size	+ 1, imsi);	// 입력한 문자열의 내용을 메모리를 확보한 공간에 복사
	}
	printf("\n--입력과 반대로 출력(포인터)--\n");
	for (i = 2; i >= 0; i--) {
		printf("%d : %s\n", i + 1, p[i]);
	}

	for (i = 0; i < 3; i++) {
		free(p[i]);
	}

	// 포인터배열 간단한 예
	char* p1 = "Hello World";
	// char p[] = "Hello World";
	printf("%s\n", p1);
	printf("%c\n", *(p1 + 0));
	printf("%c\n", p1[0]);
	printf("%c\n", *(p1 + 1));
	printf("%c\n", p1[1]);
	
}