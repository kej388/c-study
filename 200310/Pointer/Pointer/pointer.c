#include <stdio.h>

int main() {
	/*
		int aa[3] = { 10, 20, 30 };
		a + 0
		a + 1
		a + 2
		a + 3

		a + i

		�迭�� ��Ҹ� ���ϴ� ���
		a[i] == *(a+i)
		
		�迭�� ����� �ּҸ� ���ϴ� ���
		&a[i] == a + i
	*/
	int a = 10; 

	printf("a�� �ּ� : %p\n", &a);

	int* p;
	p = &a;
	printf("p�� �� : %p\n", p);
	printf("p�� ����Ű�� ���� : %d\n", *p);
	printf("p�� �ּ�: %p\n", &p);

	//�迭
	int b[3] = { 10, 20, 30 };
	printf("b�� �� : %p\n", b);
	printf("b�� ����Ű�� ���� : %d\n", *b);
	printf("b�� ����Ű�� ���� : %d\n", *(b + 0));
	printf("b�� ù��° ��� : %d\n", b[0]);
	printf("b�� �ι�° ��� : %d\n", b[1]);
	printf("b�� �ι�° ��� : %d\n", *(b + 1));
	printf("b�� ù��° ����� �ּ� : %p\n", &b[0]);
	printf("b�� ù��° ����� �ּ� : %p\n", b + 0);

	for (int i = 0; i < 3; i++) {
		printf("b[i] : %d\n", b[i]);
		printf("*(b + i) : %d\n", *(b + i));
	}
}
