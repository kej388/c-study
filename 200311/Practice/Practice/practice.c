#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
		1.�ζǹ�ȣ������ �����

		1~45������ ���� 6���� �ߺ����� �ʰ� �����

		����,%,�迭,for�� ���
*/


// 1) �ζ� ��ȣ ���� 1 ~ 45���� ���� �Լ��̿�
int lottoNum() {
	return rand() % 45 + 1;
}

int main() {
	int num[6];	// �ζ� ��ȣ ���� ����
	int notnum; // �ߺ� ��ȣ ���� ���� ����
	int i, k;		// for���� ������ ���� ����
	char check = 'N';

	// 2) num ������ 1 ~ 45������ ���� ����
	srand( (unsigned)time(NULL));	// srand()�Լ��� rand()�Լ� �ʱ�ȭ
	for (i = 0; i < 6; ) {
		notnum = lottoNum();

		// 3) �ߺ� ���ڴ� �ٽ�
		for (k = 0; k < 6; k++) {
			if (num[k] == notnum) {
				check = 'Y';
			}
		}

		if (check == 'N') {
			num[i++] = notnum;
		}
		else {
			check = 'N';
		}
		
	}

	for (i = 0; i < 6; i++) {
		printf("%d ", num[i]);
	}
	
	printf("\n\n");
	
	
}