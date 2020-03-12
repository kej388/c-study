#include <stdio.h>

int main() {
	union student {				// 공용체 변수 student를 선언
		int tot;
		char grade;
	};

	union student u;			// 공용체 변수 u를 선언

	u.tot = 300;				// 공용체 변수의 멤버에 값을 대입
	u.grade = 'A';

	printf("\n--공용체 활용--\n");	
	printf("총점 ==> %d\n", u.tot);		// 공용체 변수의 멤버값을 출력
	printf("등급 ==> %c\n", u.grade);

	// 열거형의 사용 예
	enum week {sun, mon, tue, wed, thu, fri, sat};

	enum week ww;

	ww = sat;
	
	printf("\n--열거형 활용--\n");

	if (ww == sun) {
		printf("오늘은 일요일입니다.\n\n", ww);
	}
	else {
		printf("오늘은 일요일이 아닙니다.\n\n", ww);
	}

	// 구조체와 공용체의 혼합

	typedef struct _person {
		char name[10];
		union _id {
			char phone[15];
			char jumin[15];
		}id;
	}person;

	person p;

	printf("이름 --> ");
	scanf_s("%s", p.name, 10);
	printf("전화번호 또는 주민번호 --> ");
	scanf_s("%s", p.id.jumin, 15);

	printf("\n--구조체/공용체 혼합 활용--\n");
	printf("이름 ==> %s\n", p.name);
	printf("전화번호 / 주민번호 ==> %s\n", p.id.phone);

	// 열거형을 활용한 월 이름 출력
	enum month {
		January = 1, February, March, April, May, June, July, August,
		September, October, November, December
	};

	enum month mm;

	printf("월 입력 : ");
	scanf_s("%d", &mm);

	switch (mm) {
	case January: printf("%d월은 January입니다.", mm); break;
	case February: printf("%d월은 February입니다.", mm); break;
	case March: printf("%d월은 March입니다.", mm); break;
	case April: printf("%d월은 April입니다.", mm); break;
	case May: printf("%d월은 May입니다.", mm); break;
	case June: printf("%d월은 June입니다.", mm); break;
	case July: printf("%d월은 July입니다.", mm); break;
	case August: printf("%d월은 August입니다.", mm); break;
	case September: printf("%d월은 September입니다.", mm); break;
	case October: printf("%d월은 October입니다.", mm); break;
	case November: printf("%d월은 November입니다.", mm); break;
	case December: printf("%d월은 December입니다.", mm); break;
	default: printf("잘못 입력했군요");
	}
	printf("\n\n");
}