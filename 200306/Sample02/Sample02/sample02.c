#include <stdio.h>

int main() {
	// ��ø for���� ���
	int i, k;

	for (i = 2; i <= 9; i++) {
		for (k = 1; k <= 9; k++) {
			printf("%d X %d = %d\n", i, k, i * k);
		}
		printf("\n");
	}

	// �پ��� for���� Ȱ��
	i = 0;
	for (; ; ) {
		printf("%d\n", i);
		i++;
	} // ctrl + c �� ������ ���� 
	// �Ǵٸ� ��� : flag�� �̿��Ѵ� (���α׷��ֿ��� ��, ������ �Ǵ��ϴµ� ���Ǵ� ������ Flag��� ��)

	// Flag�� �̿��� ���ѷ���
	int a;

	for ( ; ; ) {
		scanf_s("%d", &a);
		// ���� ���� Ż�� ����
		if (a == -1) {
			break; // for�� ����
		}
		printf("%d\n", a);
	}
}