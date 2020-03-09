#include <stdio.h>
#include <string.h>

int main() {
	/*1. id, password를 키보드로 입력받아서 배열에 저장하기.(회원가입).*/

	char id[] = "test"; 
	char password[] = "1111";
	char key_id[10];
	char key_pwd[10];
	int r1, r2;
	int i;

	puts("id을 입력하세요.");
	gets_s(key_id, 10);
	puts("password를 입력하세요 : ");
	gets_s(key_pwd, 10);

	
	r1 = strlen(key_id); // id 문자열의 길이
	r2 = strlen(key_pwd); // password 문자열의 길이
	for (i = 0; i < r1; i++) {
		key_id[i] = key_id[i];
	} // 배열 저장

	for (i = 0;i < r2;i++) {
		key_pwd[i] = key_pwd[i];
	} // 배열 저장

	/*2. 키보드로 입력한 id, password가 1의 id, password와 일치하면 '로그인되었습니다.' 출력하기(로그인)*/

	if (strcmp(key_id, id) == 0) {
		printf("로그인 되었습니다.\n");
	} 
	// strcmp함수를 이용하여 key_id와 id의 내용이 일치하면 로그인완료

	/*3. 국어, 영어, 수학 성적을 입력받아서 배열에 저장한 후 평균 구하기.for문 사용*/
	int jumsu[3];
	int sum = 0;
	int avg;

	// 점수 입력
	printf("국어, 영어, 수학점수를 입력하세요 : ");
	for (i = 0; i < 3; i++) {
		scanf_s("%d", &jumsu[i]);
	}

	// 점수의 합
	for (i = 0; i < 3; i++) {
		sum += jumsu[i];
	}

	avg = sum / 3;

	printf("세 과목의 평균 : %d", avg);
}