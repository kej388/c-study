#include <stdio.h>
#include <string.h>

int main() {
	/* 1.  3���� �л� �̸�, ��ȭ��ȣ�� scanf�� �޾Ƽ� �迭�� ������ �� ����Ͻÿ�. */

	char name[3][10];
	int phonenum[3][12];
	int storenum[3][12];
	for (int i = 0; i < 3; i++) {
		printf("%d��° �л��̸��� �Է��ϼ��� : ", i + 1);
		scanf_s(" %s", &name[i], 10);
		
		int num = strlen(name[i]);
		for (int j = 0; j < num; j++) {
			name[i][j] = name[i][j];
		}

		printf("%d��° �л��� ��ȭ��ȣ�� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &phonenum[i][12]);
		storenum[i][12] = phonenum[i][12];
	}
	for (int i = 0; i < 3; i++) {
		printf("%d��° �л��� �̸�: %s\n %d��° �л��� ��ȭ��ȣ : %d\n", i + 1, name[i], i + 1, storenum[i][12]);
	}
	
	//2. 1���� ���ѹݺ��ϴٰ� x�� �Է��ϸ� �����ϵ��� �����Ͻÿ�.
	for (int i = 0; ; i++) {

		printf("%d��° �л��̸��� �Է��ϼ��� : ", i + 1);
		scanf_s(" %s", &name[i], 10);

		int num = strlen(name[i]);
		for (int j = 0; j < num; j++) {
			name[i][j] = name[i][j];
		}

		if (name[i][0] == 'x') {
			break;
		}

		printf("%d��° �л��� ��ȭ��ȣ�� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &phonenum[i][12]);
		storenum[i][12] = phonenum[i][12];

		printf("%d��° �л��� �̸�: %s\n %d��° �л��� ��ȭ��ȣ : %d\n", i + 1, name[i], i + 1, storenum[i][12]);
	}
	printf("����Ǿ����ϴ�.");

	//3. 2���� �Լ��� �����ϼ���.

}

	
	





