#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main() {
	// ������ �迭�� ��� ��
	char* p[3];				// �� ĭ�� ������ �迭 ����
	char imsi[100];			// �Է°��� ������ �ӽ� ���� �迭
	int i, size;

	for (i = 0; i < 3; i++) {
		printf("%d��°���ڿ� : ", i + 1);
		gets_s(imsi, 100);	// �ӽ� ������ ���ڿ��� �Է�

		size = strlen(imsi);	// ���ڿ��� ����
		p[i] = (char*)malloc((sizeof(char) * size) + 1);	// �Է��� ���� + 1 ũ���� �޸𸮸� Ȯ��

		strcpy_s(p[i], size	+ 1, imsi);	// �Է��� ���ڿ��� ������ �޸𸮸� Ȯ���� ������ ����
	}
	printf("\n--�Է°� �ݴ�� ���(������)--\n");
	for (i = 2; i >= 0; i--) {
		printf("%d : %s\n", i + 1, p[i]);
	}

	for (i = 0; i < 3; i++) {
		free(p[i]);
	}

	// �����͹迭 ������ ��
	char* p1 = "Hello World";
	// char p[] = "Hello World";
	printf("%s\n", p1);
	printf("%c\n", *(p1 + 0));
	printf("%c\n", p1[0]);
	printf("%c\n", *(p1 + 1));
	printf("%c\n", p1[1]);
	
}