#include <stdio.h>

int main() {
	// for�� -> while��
	int i = 0;

	while (i < 5) {
		printf("while���� �����մϴ�. \n");
		i++;
	}

	// ���� �Է¹޾Ƽ� 10���� ���� �������� �ݺ�
	int a;

	do {
		scanf_s("%d", &a);
	} while (a < 10);
	
	printf("10���� Ů�ϴ�");
	
	// do ~ while �� Ȱ��
	int menu;

	do {
		printf("\n�մ� �ֹ��Ͻðڽ��ϱ�?\n");
		printf("<1> ī��� <2> īǪġ�� <3> �Ƹ޸�ī�� <4> �׸� ==> ");
		scanf_s("%d", &menu);

		switch (menu) {
		case 1: printf("ī��� ���׽��ϴ�.\n"); break;
		case 2: printf("īǪġ�� ���׽��ϴ�.\n"); break;
		case 3: printf("�Ƹ޸�ī�� ���׽��ϴ�.\n"); break;
		case 4: printf("�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�.\n"); break;
		default: printf("�߸� �ֹ��ϼ̽��ϴ�.\n");
		}

	} while (menu != 4);

	// break��
	int hap = 0;
	int b;

	for (b = 1; b <= 100; b++) {
		hap += b;

		if (hap >= 1000) {
			break;
		}
	}
	printf("1 ~ 100�� �տ��� ���ʷ� 1000�� �Ѵ� ��ġ��? : %d\n", b);

	// continue ��
	hap = 0;
	int c;

	for (c = 1; c <= 100; c++) {
		if (c % 3 == 0) {
			continue;
		}
		hap += c;
	}

	printf("1~100������ ��(3�� ��� ����): %d\n", hap);

	/* return
		1. �Լ����� 
			return;
		2. �Լ��� ��ȯ���� �����µ� ���
			return 0;
	*/

}