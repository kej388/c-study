/*
	1. ������,���ǻ�,������ �Է��� �� �ִ� book ����ü�� �����ؼ� 10���� å�� �Է¹޾Ƽ� books.txt�� �����ϱ�
*/

#include <stdio.h>
#include <malloc.h>

int main() {
	// book ����ü ���� (������, ���ǻ�, ����)
	struct book {
		char bookname[20];
		char pub[20];
		int price;
	};

	// 10���� å�� �Է� �ޱ�

	struct book* b;
	int i;
	int wfp;

	b = (struct book*)malloc((sizeof(struct book)) * 10);

	fopen_s(&wfp, "C:\\C_WorkSpace\\books.txt", "w");

	for (i = 0; i < 10; i++) {
		printf("%d ��° ������, ���ǻ�, ������ �Է��ϼ��� ", i + 1);
		scanf_s(" %s %s %d", &b[i].bookname, 19, &b[i].pub, 19, &b[i].price);
		printf("\n");
	}
	fprintf_s(wfp, "����, ������, ���ǻ�, ����\n");
	for (i = 0; i < 10; i++) {
		fprintf_s(wfp, "%d, %s, %s, %d\n", i + 1, b[i].bookname, b[i].pub, b[i].price);

	}
	
	free(b);
	fclose(wfp);
}