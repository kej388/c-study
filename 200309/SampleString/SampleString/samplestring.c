#include <stdio.h>
#include <string.h>

int main() {
	// ���ڿ� ó�� �Լ� strlen() ��� ��
	char ss[] = "XYZ";
	int len;

	len = strlen(ss); // ������ ���̸� �˷��ִ� �Լ� : strlen()

	printf("���ڿ�\"%s\"�� ���� ==> %d\n", ss, len);

	// ���ڿ� ó�� �Լ� strcpy_s() ��� ����1
	char dd[4];

	strcpy_s(dd, 4, "XYZ"); // ���ڿ� ���� �Լ� : strcpy_s()

	printf("���ڿ� ss�� ���� ==> %s\n", dd);

	// ���ڿ� ó�� �Լ� strcpy_s() ��� ����2
	char tt[4] = "ABC";
	strcpy_s(ss, 4, tt);

	printf("ss: %s\n", ss);

	// ���ڿ� ó�� �Լ� strcat_s() ��� ��
	char ff[7] = "XYZ";

	strcat_s(ff, 7, "ABC");

	printf("�̾��� ���ڿ� ff�� ���� ==> %s\n", ff);

	// ���ڿ� ó�� �Լ� strcmp() ��� ����1
	char qq[] = "xyz";
	int r;

	r = strcmp(ss, qq);

	printf("�� ���ڿ��� �񱳰�� ===> %d\n", r);
	// ���ڿ� ó�� �Լ� strcmp() ��� ����2
	char ww[] = "ABC";

	r = strcmp(ss, ww);

	printf("�� ���ڿ��� �񱳰�� ===> %d\n", r);

	// ���ڿ� ����� �Լ� gets_s( ),puts( ) ��� �� 
	char ss01[20];
	char tt01[20];
	int r1, r2;

	puts("ù��° ���ڿ��� �Է��ϼ���.");
	gets_s(ss01, 20);

	puts("�ι�° ���ڿ��� �Է��ϼ���.");
	gets_s(tt01, 20);

	r1 = strlen(ss01);
	r2 = strlen(tt01);

	printf("ù���� ���ڿ��� ���� ==> %d\n", r1);
	printf("�ι��� ���ڿ��� ���� ==> %d\n", r2);

	if (strcmp(ss01, tt01) == 0) {
		puts("�� ������ �����ϴ�.");
	}
	else {
		puts("�� ������ �ٸ��ϴ�.");
	}
}