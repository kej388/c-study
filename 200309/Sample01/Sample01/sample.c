#include <stdio.h>

int main() {
	// for������ �迭�� ÷�ڸ� Ȱ���ϴ� ��

	int aa[4];
	int hap = 0;
	int i;

	for (i = 0; i < 4; i++) {
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &aa[i]);
		hap += aa[i];
	}

	printf("�հ� ==> %d\n", hap);

	// ���ڿ��� �����ϰ� ����ϴ� ��
	char ss[8] = "Basic-C";

	ss[5] = '#';

	for (i = 0; i < 8; i++) {
		printf("ss[%d] ==> %c\n", i, ss[i]);
	}
	printf("���ڿ� �迭 ss ==> %s\n", ss);

	// ���ڿ� ������ ������ ����ϴ� ��
	char dd[5] = "abcd";
	char tt[5];
	
	for (i = 0; i < 4; i++) {
		tt[i] = dd[3 - i];
	}
	tt[4] = '\0';

	printf("�Ųٷ� ����� ��� ==> %s\n", tt);
}