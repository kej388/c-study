/*
	1. 도서명,출판사,가격을 입력할 수 있는 book 구조체를 생성해서 10권을 책을 입력받아서 books.txt에 저장하기
*/

#include <stdio.h>
#include <malloc.h>

int main() {
	// book 구조체 생성 (도서명, 출판사, 가격)
	struct book {
		char bookname[20];
		char pub[20];
		int price;
	};

	// 10권의 책을 입력 받기

	struct book* b;
	int i;
	int wfp;

	b = (struct book*)malloc((sizeof(struct book)) * 10);

	fopen_s(&wfp, "C:\\C_WorkSpace\\books.txt", "w");

	for (i = 0; i < 10; i++) {
		printf("%d 번째 도서명, 출판사, 가격을 입력하세요 ", i + 1);
		scanf_s(" %s %s %d", &b[i].bookname, 19, &b[i].pub, 19, &b[i].price);
		printf("\n");
	}
	fprintf_s(wfp, "순서, 도서명, 출판사, 가격\n");
	for (i = 0; i < 10; i++) {
		fprintf_s(wfp, "%d, %s, %s, %d\n", i + 1, b[i].bookname, b[i].pub, b[i].price);

	}
	
	free(b);
	fclose(wfp);
}