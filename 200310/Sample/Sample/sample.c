#include <stdio.h>

int sum(int* a) {
	return a[0] + a[1];
}

/* 
	�Լ��� ���ϰ��� �Ѱ��̴�.
	=> �迭�� ������ ���� ���� �ƴ϶� �迭�� �ּ�(�̸�)�� �����Ѵ�
*/

int* calc(int a, int b) {
	int result[2];

	result[0] = a + b;
	result[1] = a - b;

	return result;
}

int gugu(int dan) {
	int i;

	for (i = 1; i <= 9; i++) {
		printf("%2d X %2d = %2d\n", dan, i, dan * i);
	}
}

int main() {
	int arr[] = { 100, 200 };

	printf("result : %d\n", sum(arr));
	
	int *result = calc(10, 20);
	printf("result[0] : %d\n result[1] : %d\n", result[0], result[1]);
	
	/*
		1. �ڵ� ����(�ߺ�����)
		2. ������
		3. ���α׷��� ��ɺ��� ����� ���� �Է�, ���, ����ϴ� ����� ������ �Լ��� ���� => moduleȭ(��ǰȭ)
		4. ������
	*/

	// �Լ��� �̿��� ������ ���α׷� 
	int input;

	printf("����ϰ� ���� ���� �Է� : ");
	scanf_s("%d", &input);

	gugu(input);
}