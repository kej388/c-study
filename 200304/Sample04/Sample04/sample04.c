#include <stdio.h>

int main() {
	printf("%d\n", 123);
	printf("%5d\n", 123);
	printf("%05d\n", 123);

	printf("%f\n", 123.45);
	printf("%7.1f\n", 123.45);
	printf("%7.3f\n", 123.45);

	printf("%s\n", "Basic-C");
	printf("%10s\n", "Basic-C");

	printf("\n 줄바꿈 \n 연습 \n");
	printf("\t 탭키 \t 연습 \n");
	printf("이것을 \r 덮어씁니다. \n");
	printf("\a\a\a 삐소리 3번 \n");
	printf("글자가 \"강조\"되는 효과 \n");
	printf("\\\\\\ 역슬래시 세개 출력 \n");
}