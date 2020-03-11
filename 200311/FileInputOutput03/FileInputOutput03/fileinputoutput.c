#include <stdio.h>
#include <string.h>

void main() {
	/*// 파일을 이용한 출력 예1

	char str[200];			// 변수 선언
	FILE* rfp;				// 읽기용 파일 포인터
	FILE* wfp;				// 쓰기용 파일 포인터

	fopen_s(&rfp, "C:\\windows\\win.ini", "r");	// 읽기용 파일 open
	fopen_s(&wfp, "C:\\C_WorkSpace\\data5.txt", "w");	// 쓰기용 파일 open

	for (;;) {				// 무한루프
		fgets(str, 200, rfp);	// 읽기용파일에서 한 줄 read

		if (feof(rfp)) {		// 읽기용 파일의 끝 → break
			break;
		}

		fputs(str, wfp);	// 쓰기용 파일에 한 쭐 write
	}

	fclose(rfp);			// 읽기용 파일 close
	fclose(wfp);			// 쓰기용 파일 close

	// 파일을 이용한 출력 예2
	FILE* wfp1;				// 쓰기용 파일 포인터 선언
	int hap = 0;			
	int in, i;

	fopen_s(&wfp1, "C:\\C_WorkSpace\\data7.txt", "w"); // 파일 쓰기 모드 open

	for (i = 0;i < 5;i++) {		// 5회 반복
		printf("숫자%d : ", i + 1);
		scanf_s("%d", &in);
		hap += in;
	}

	fprintf_s(wfp1, "합계 ==> : %d\n", hap);	//합계를 파일 write

	fclose(wfp1);			// 쓰기용  파일 close */

	// 파일에서 읽어온 문자열을 파일에 거꾸로 출력
	FILE *rfp1, *wfp2;		// 읽기용, 쓰기용 각각 파일 포인터 선언
	char str1[200], str2[200];	// 입력 문자열, 출력 문자열, 변수 선언
	int size, i1;

	fopen_s(&rfp1, "C:\\C_WorkSpace\\in.txt", "r");	// 입력 파일 open
	fopen_s(&wfp2, "C:\\C_WorkSpace\\out.txt", "w");// 출력 파일 open

	while (1) {				// 무한루프
		fgets(str1, 200, rfp1);	// 읽기 파일의 문자열 read

		if (feof(rfp1)) {		// 읽기 파일의 끝이면 break;
			break;
		}

		size = strlen(str1);	// 읽기 파일의 문자열의 크기를 size에 저장
		for (i1 = size - 1; i1 >= 0; i1--) {	// 문자열 크기 - 1 만큼 반복하면 입력 문자열와 출력 문자열의 위치 change
			str2[size - 1 - i1] = str1[i1 - 1];  // ex) str2[200 - 1 - 199] = str1[199 - 1] → str2[0] = str1[198]
			str2[size - 1] = '\0';	// 출력 문자열의 제일 끝에 널 문자를 추가 ex) str2[200 - 1] = '\0' → str2[199] = '\0'
			fputs(str2, wfp2);		// 출력 문자열을 출력 파일에 write
			fputs("\n", wfp2);		// 줄바꿈
		}

		fclose(rfp1);			// 읽기 파일 close
		fclose(wfp2);			// 쓰기 파일 close
	}
}