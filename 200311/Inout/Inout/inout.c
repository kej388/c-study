#include <stdio.h>
#include <string.h>

int main() {
	// 문자열 입출력 함수 사용 예
	char s[20];

	printf("문자열을 입력 : ");
	gets_s(s, 20);

	puts(s);

	/*
		버퍼(buffer) 
		: cpu와 주변기기(보조기억장치등) 의 속도차이때문에 만든 메모리 저장소
		
	*/

	// 문자열 입출력 함수 사용 예2
	char ch;

	ch = getch(); // 문자 한 자를 입력 받는다
	putch(ch); // 버퍼에서 한 글자를 읽어서 화면에 출력한다

	ch = getch();
	putch(ch);

	ch = getch();
	putch(ch);
	printf("\n");

	// 문자 입출력 함수 사용 예3
	char password[5] = "5678";
	char input[5];
	int i;

	printf("비밀번호 4글자를 입력하세요 : ");
	for (i = 0; i < 4; i++) {
		input[i] = getch();
	}

	if (strncmp(password, input, 4) == 0) {
		printf("\n비밀번호 통과 ~~\n");
	}
	else {
		printf("\n입력한 비밀번호 : ");
		for (i = 0; i < 4; i++) {
			putch(input[i]);
		}
		printf(" 가 틀렸음\n");
	}

	// 문자 입출력 함수 사용 예4
	char ch1;

	ch1 = getche(); // 문자 한 자를 입력 받고, 화면에도 보여준다

	ch1 = getche();

	ch1 = getche();
}