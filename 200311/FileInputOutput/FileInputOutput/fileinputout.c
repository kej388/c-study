#include <stdio.h>

void main() {
	// 파일을 이용한 입력 예1

	char s[20]; // 문자 배열 선언
	FILE* rfp;	// 파일 포인터 저장

	fopen_s(&rfp, "C:\\C_WorkSpace\\data1.txt", "r"); // 파일 읽기(r) 모드로 연다. 폴더와 파일의 경로는 '\'를 두 개씩 써야 한다.

	fgets(s, 20, rfp);

	printf("파일에서 읽은 문자열 : ");
	puts(s);	// 화면에 문자열 출력

	fclose(rfp); // 파일 닫아준다.

	/*
		입출력(파일, DB, Network)의 기본 작업순서
		1. open
		2. 작업
		3. close
		=========================================
		MS-DOS
		: MS에서 만든 CLI(Command Line Interface)방식의 OS
		→ MS-Windows로 대체됨
	*/

	// 파일을 이용한 입력 예2
	char str[200];	// 한번에 최대 199자까지 읽을 수 있도록 배열 선언
	FILE* rfp01;	// 파일 포인터 선언

	fopen_s(&rfp01, "C:\\windows\\win.ini", "r"); // 읽어 올 파일 연다 (주소, "경로", "읽기(r)")

	for (;;) {						// 무한루프
		fgets(str, 200, rfp01);		// 파일에서 한 줄씩 읽어 온다.

		if (feof(rfp01))			// eof(end of file) 파일의 끝이라면 for문 종료
			break;

		printf("%s", str);			// 파일의 끝이 아니므로 읽은 내용 출력
	}

	fclose(rfp01);					// 파일을 닫는다.

	// 파일을 이용한 입력 예3
	FILE* rfp2;						// 파일 포인터 선언
	int hap = 0;					// 합계 변수 선언하고 초기화
	int in1, i1;					// 읽어 올 숫자 변수, 반복을 위한 변수 선언

	fopen_s(&rfp2, "C:\\C_WorkSpace\\data2.txt", "r");	// 파일 읽기 모드

	for (i1 = 0; i1 < 5; i1++) {	// 5회반복, 파일포인터에서 정수를 읽어 합계 누적
		fscanf_s(rfp2, "%d", &in1);
		hap += in1;
	}

	printf("합계 ==> %d\n", hap);	// 합계 출력

	fclose(rfp2);					// 파일 닫음
}