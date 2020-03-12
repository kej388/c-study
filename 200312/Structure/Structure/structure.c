#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*
	함수포인터
	: 함수를 가리키는  포인터
	→ 함수포인터로 함수를 호출할 수 있다.
	======================================
	구조체
	: 사용자 저의 자료형
*/
int main() {
	// 구조체의 사용 예
	struct bibim {			// 구조체형 bibim을 선언 (저장 공간 X)
		int a;
		float b;
		char c;
		char d[5];
	};

	struct bibim b1;		// 구조체 변수 b1을 선언 (저장 공간 O)

	b1.a = 10;				// 구조체 변수의 멤버에 값을 대입
	b1.b = 1.1f;
	b1.c = 'A';
	strcpy_s(b1.d, 5, "ABCD");

	printf("b1.a ==> %d\n", b1.a);	// 구조체 변수의 멤버 출력
	printf("b1.b ==> %f\n", b1.b);
	printf("b1.c ==> %c\n", b1.c);
	printf("b1.d ==> %s\n", b1.d);

	// 구조체 응용
	typedef struct _student {				// student 구조체형을 선언한 후 멤버 변수 선언
		char name[10];
		int kor;
		int eng;
		float avg;
	}student;

	student s;				// 구조체 변수 s를 선언

	printf("이름 : ");
	scanf_s("%s", s.name, 9);

	printf("국어 점수 : ");
	scanf_s("%d", &s.kor);

	printf("영어 점수 : ");
	scanf_s("%d", &s.eng);

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("\n--구조체 활용--\n");
	printf("학생 이름 ==> %s\n", s.name);
	printf("국어 점수 ==> %d\n", s.kor);
	printf("영어 점수 ==> %d\n", s.eng);
	printf("평균 점수 ==> %5.1f\n", s.avg);

	// 구조체 배열
	student s1[3];

	int i;

	strcpy_s(s1[0].name, 9, "Kim");
	s1[0].kor = 90;
	s1[0].eng = 80;
	s1[0].avg = (s1[0].kor + s1[0].eng) / 2.0f;

	strcpy_s(s1[1].name, 9, "Lee");
	s1[1].kor = 70;
	s1[1].eng = 60;
	s1[1].avg = (s1[1].kor + s1[1].eng) / 2.0f;

	strcpy_s(s1[2].name, 9, "Park");
	s1[2].kor = 50;
	s1[2].eng = 40;
	s1[2].avg = (s1[2].kor + s1[2].eng) / 2.0f;

	printf("--구조체 배열-- \n");
	for (i = 0; i < 3; i++) {
		printf("학생 이름 ==> %s\n", s1[i].name);
		printf("국어 점수 ==> %d\n", s1[i].kor);
		printf("영어 점수 ==> %d\n", s1[i].eng);
		printf("평균 점수 ==> %5.1f\n", s1[i].avg);
		printf("\n");
	}

	// 구조체 포인터를 사용한 예
	student s2;
	student* p;

	p = &s2;

	printf("이름 입력 : ");
	scanf_s("%s", p->name, 10);

	printf("국어점수 입력 : ");
	scanf_s("%d", &p->kor);

	printf("영어점수 입력 : ");
	scanf_s("%d", &p->eng);
	
	p->avg = (p -> kor + p->eng) / 2.0f;

	printf("--구조체 포인터 활용-- \n");
	printf("학생 이름 ==> %s\n", p->name);
	printf("국어 점수 ==> %d\n", p->kor);
	printf("영어 점수 ==> %d\n", p->eng);
	printf("평균 점수 ==> %5.1f\n", p->avg);
	printf("\n");

	// 구조체 포인터를 활용한 학생관리
	struct student1 {
		char name1[10];
		int age;
	};

	struct student1* s3;

	int cnt;

	printf("입력할 학생 수 : ");
	scanf_s("%d", &cnt);

	s3 = (struct student1*)malloc((sizeof(struct student1)) * cnt);

	for (i = 0; i < cnt; i++) {
		printf("이름과 나이 입력 : ");
		scanf_s("%s %d", s3[i].name1, 9, &s3[i].age);
	}

	printf("\n\n--학생명단--\n");
	for (i = 0; i < cnt; i++) {
		printf("이름 : %s, 나이 : %d\n", s3[i].name1, s3[i].age);

		free(s3);
	}

	// 간단한 예제2
	char p2[2][100] = { "Hello World", "C-Language" };
	printf("%s\n", p2[0]);
	printf("%s\n", p2);
	printf("%s\n", p2[1]);
	printf("%s\n", p2 + 1);

	printf("%c\n", p2[0][0]);
}