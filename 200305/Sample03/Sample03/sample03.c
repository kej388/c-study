#include <stdio.h>

int main() {

	// if��
	int a = 99;

	if (a < 100) printf("a�� 100���� �۴�\n"); // ������ �� ���� ���

	// if���� �߸��� ��
	int b = 200;
	
	if (b < 100)
	printf("100���� �۱���..\n"); // �߸��� ��
	printf("�����̹Ƿ� �� ������ �Ⱥ��̰���?\n");

	printf("���α׷� ��!\n");

	// if���� �ٸ� ��

	if (b < 100) {
		printf("100���� �۱���..\n");
		printf("���̸� �� ���嵵 ���̰���?\n");
	}
	else {
		printf("100���� ũ����..\n");
		printf("�����̸� �� ���嵵 ���̰���?\n");
	}

	printf("���α׷� ��!\n");

	// ��ø if��
	int c = 75;

	if (c > 50) {
		if (c < 100) {

			printf("50���� ũ�� 100���� �۱���..\n");
		}
		else {
			printf("��~~ 100���� ũ����..\n");
		}
	}
	else {
		printf("����~���� �۱���..\n");
	}

	// ���� if��
	int d;

	printf("���� :");
	scanf_s("%d", &d);

	if (d >= 90) {
		printf("A");
	}
	else if (d >= 80) {
		printf("B");
	}
	else if (d >= 70) {
		printf("C");
	}
	else if (d >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}

	printf("�����Դϴ�.\n");

	// switch ~ case �� ����1
	int e;

	printf("1~4�� �߿� �����ϼ��� : ");
	scanf_s("%d", &e);

	switch (e) {
	case 1 :
		printf("1�� �����ϼ̽��ϴ�.\n");
		break;
	case 2:
		printf("2�� �����ϼ̽��ϴ�.\n");
		break;
	case 3:
		printf("3�� �����ϼ̽��ϴ�.\n");
		break;
	case 4:
		printf("4�� �����ϼ̽��ϴ�.\n");
		break;
	default:
		printf("�ٸ� ���� �����ϼ̽��ϴ�.\n");
	}
	// switch ~ case �� ����2

	int f;

	printf("1~5�� �߿� �����ϼ��� : ");
	scanf_s("%d", &f);

	switch (f) {
	case 1: case 2: case 3:
		printf("1 or 2 or 3\n");
		break;
	case 4: case 5:
		printf("4 or 5\n");
		break;
	default:
		printf("etc..\n");
	}
	
	// return (: �Լ�����)�� ���� ���ù� 

	char operator;

	scanf_s("%c", &operator);

	if (operator == '+') {
		printf("+\n");
		return;
	}
	if (operator == '-') {
		printf("-\n");
		return;
	}
	if (operator == '*') {
		printf("*\n");
		return;
	}
	if (operator == '/') {
		printf("/\n");
		return; // �Լ�����
	}
}