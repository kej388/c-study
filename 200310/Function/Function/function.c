#include <stdio.h>

int a1 = 100;

void func1() {
	int a1 = 200;
	printf("func1()���� a1�� �� ==> %d\n", a1);
}

int plus(int v1, int v2) {
	int result;
	result = v1 + v2;
	return result;
}

int calc(int v1, int v2, int op) {
	int result;

	switch (op) {
	case 1: result = v1 + v2; break;
	case 2: result = v1 - v2; break;
	case 3: result = v1 * v2; break;
	case 4: result = v1 / v2; break;
	}

	return result;
}

void func2() {
	printf("void�� �Լ��� �����ٰ� ����.\n");
}

int func3() {
	return 100;
}

int sum(int a, int b) {
	return a + b;
}

int printResult(int result) {
	printf("result : %d\n", result);
}

void func4(int* a) {
	*a = *a + 1;
	printf("���޹��� a ==> %d\n", *a);
}

void func5(char a, char b) {
	int imsi;

	imsi = a;
	a = b;
	b = imsi;
}

void func6(char* a, char* b) {
	int imsi;

	imsi = *a;
	*a = *b;
	*b = imsi;
}

int main() {
	// �������� �Լ� ��� �� 1
	int hap;

	hap = plus(100, 200);

	printf("100�� 200�� plus()�Լ� ����� : %d\n", hap);

	// �������� �Լ� ��� �� 2
	int res;
	int oper, a, b;

	printf("��� �Է� (1: +, 2 : -, 3 : *, 4 : /) : ");
	scanf_s("%d", &oper);

	printf("����� �� ���ڸ� �Է� : ");
	scanf_s("%d %d", &a, &b);

	res = calc(a, b, oper);

	printf("��� ����� : %d\n", res);

	// ���������� ���������� ����
	func1();
	printf("main()���� a1�� �� ==> %d\n", a1);

	// ��ȯ�� ������ ���� �Լ� ��
	int a02;

	func2();

	a02 = func3();
	printf("int�� �Լ����� ������ �� ==> %d\n", a02);

	// �Լ�����
	int result = sum(10, 20);
	printf("result : %d\n", result);
	printf("result: %d\n", sum(30, 40));

	printResult(sum(2000, 3000));

	/*
		�Լ��� �Ű������� ���� �з�

		1. Call by Value
		: �Ű������� �Ϲ����� ������ ���

		2. Call by Address
		: �Ű������� �������� ���

		3. Call by Reference
		: �Ű������� ����(��)�� ���
		: JAVA, C#, C++ �� ��ü������
	*/

	/*
		main()�Լ��� ����������

		func1()���� ���(����)�� �� �ְ� �Ϸ��� �Ŵ뺯���� �����ͷ� �����ϴ� ����� �ִ�
	*/
	int a03 = 10;

	func4(&a03);
	printf("func4() ���� ���� a03 => %d\n", a03);

	// �Ű����� ���� ��� ��
	char x = 'A', y = 'Z';

	printf("���� �� x = %c, y = %c\n", x, y);

	func5(x, y);
	printf("���� ������ �� x = %c, y = %c\n", x, y);

	func6(&x, &y);
	printf("�ּҸ� ������ �� x=%c, y=%c\n", x, y);
}