#include <stdio.h>

int main() {
	// for문으로 배열의 첨자를 활용하는 예

	int aa[4];
	int hap = 0;
	int i;

	for (i = 0; i < 4; i++) {
		printf("%d번째 숫자를 입력하세요 : ", i + 1);
		scanf_s("%d", &aa[i]);
		hap += aa[i];
	}

	printf("합계 ==> %d\n", hap);

	// 문자열을 선언하고 출력하는 예
	char ss[8] = "Basic-C";

	ss[5] = '#';

	for (i = 0; i < 8; i++) {
		printf("ss[%d] ==> %c\n", i, ss[i]);
	}
	printf("문자열 배열 ss ==> %s\n", ss);

	// 문자열 순서를 뒤집어 출력하는 예
	char dd[5] = "abcd";
	char tt[5];
	
	for (i = 0; i < 4; i++) {
		tt[i] = dd[3 - i];
	}
	tt[4] = '\0';

	printf("거꾸로 출력한 결과 ==> %s\n", tt);
}