#include <stdio.h>

int main() {
	// 2���� �迭�� ��� ��
	int aa[3][4];
	int i, k;

	int val = 1;

	for(i = 0; i < 3; i++) {
		for(k = 0; k < 4; k++) {
			aa[i][k] = val;
			val++;
		}
	}

	printf("aa[0][0]���� aa[2][3]���� ���\n");

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 4; k++) {
			printf("%3d", aa[i][k]);
		}
		printf("\n");
	}
}