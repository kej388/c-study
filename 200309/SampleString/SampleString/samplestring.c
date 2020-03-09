#include <stdio.h>
#include <string.h>

int main() {
	// 문자열 처리 함수 strlen() 사용 예
	char ss[] = "XYZ";
	int len;

	len = strlen(ss); // 문자의 길이를 알려주는 함수 : strlen()

	printf("문자열\"%s\"의 길이 ==> %d\n", ss, len);

	// 문자열 처리 함수 strcpy_s() 사용 예제1
	char dd[4];

	strcpy_s(dd, 4, "XYZ"); // 문자열 복사 함수 : strcpy_s()

	printf("문자열 ss의 내용 ==> %s\n", dd);

	// 문자열 처리 함수 strcpy_s() 사용 예제2
	char tt[4] = "ABC";
	strcpy_s(ss, 4, tt);

	printf("ss: %s\n", ss);

	// 문자열 처리 함수 strcat_s() 사용 예
	char ff[7] = "XYZ";

	strcat_s(ff, 7, "ABC");

	printf("이어진 문자열 ff의 내용 ==> %s\n", ff);

	// 문자열 처리 함수 strcmp() 사용 예제1
	char qq[] = "xyz";
	int r;

	r = strcmp(ss, qq);

	printf("두 문자열의 비교결과 ===> %d\n", r);
	// 문자열 처리 함수 strcmp() 사용 예제2
	char ww[] = "ABC";

	r = strcmp(ss, ww);

	printf("두 문자열의 비교결과 ===> %d\n", r);

	// 문자열 입출력 함수 gets_s( ),puts( ) 사용 예 
	char ss01[20];
	char tt01[20];
	int r1, r2;

	puts("첫번째 문자열을 입력하세요.");
	gets_s(ss01, 20);

	puts("두번째 문자열을 입력하세요.");
	gets_s(tt01, 20);

	r1 = strlen(ss01);
	r2 = strlen(tt01);

	printf("첫번재 문자열의 길이 ==> %d\n", r1);
	printf("두번재 문자열의 길이 ==> %d\n", r2);

	if (strcmp(ss01, tt01) == 0) {
		puts("두 내용은 같습니다.");
	}
	else {
		puts("두 내용은 다릅니다.");
	}
}