/*
	C���� ���� ���� �� seed�� �ʿ�
	
	seed�� ������ ���ϱ� ���� �ʿ��� �⺻��(?)
	seed�� �ٲ�� ������ �ٲ�
	seed�� time(�ð�)�� �ַ� ���
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getNumber() {
	return rand() % 45 + 1;
}

int main() {
	short int lotto[6] = { 0, };
	int i, k, num;
	char dup = 'N';

	printf("** �ζ� ��÷�� �����մϴ�. **\n\n");
	srand((unsigned)time(NULL));
}