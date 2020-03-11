/*
	C���� ���� ���� �� seed�� �ʿ�

	seed�� ������ ���ϱ� ���� �ʿ��� �⺻��(?)
	seed�� �ٲ�� ������ �ٲ�
	seed�� time(�ð�)�� �ַ� ���
*/

#include <stdio.h>		
#include <stdlib.h>		// ����
#include <time.h>		// �ð�

int getNumber() {		// 1 ~ 45���� �߿��� ���� �ϳ��� �����ϴ� �Լ�
	return rand() % 45 + 1; // rand() �Լ��� 0 ~ 32767 �� �ϳ��� ���Ƿ� ��ȯ
}

int main() {
	short int lotto[6] = { 0, };	// ��÷�� ���ڸ� ���� �迭
	int i, k, num;
	char dup = 'N';

	printf("** �ζ� ��÷�� �����մϴ�. **\n\n");
	srand((unsigned)time(NULL));

	for (i = 0; i < 6; ) {
		num = getNumber();

		for (k = 0; k < 6; k++) {
			if (lotto[k] == num)
				dup = 'Y';
		}
		if (dup == 'N')
			lotto[i++] = num;
		else
			dup = 'N';
	}

	printf("��÷�� �ζ� ��ȣ ==> ");
	for (i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
	}

	printf("\n\n");
}