#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ��ǻ�� 3���� ���� �����Լ�
int computer() {
	return rand() % 9 + 1;
}

int main() {
	// 1. ��ǻ�Ͱ� 3���� ������ �����Ѵ�. (�Լ�)
	// 2. 3���� ���� �� �ߺ� x
	int cptnum[3];															// 3���� ������ ���� �迭 ����
	int c;																	// �������� ���� ����
	int usernum[3];															// ����ڰ� �Է��Ͽ� ������ ����
	char answer;

	srand((unsigned)time(NULL));

	for (;;) {
		for (int i = 0; i < 3; ) {
			char check = 'N';													// �ߺ��˻� ������ �ʱ�ȭ = 'N'
			c = computer();

			for (int k = 0; k < i + 1; k++) {
				if (cptnum[k] == c) {
					check = 'Y';
				}
			}

			if (check == 'N') {
				cptnum[i++] = c;
			}
			else {
				continue;
			}

		}
		printf("��ǻ�Ͱ� �Է��� ���� :");
		for (int i = 0; i < 3; i++) {
			printf("%d ", cptnum[i]);
		}
		printf("\n");
		// 3) ����ڰ� 3���� ���� �Է�

		printf("3���� ���ڸ� �Է��ϼ���\n");
		printf("�ߵ� ���⸦ �Ͻ÷��� 0�� ��������.");

		
		for (;;) {
			int s = 0;
			int b = 0;
			for (int i = 0; i < 3; i++) {
				scanf_s("%d", &usernum[i]);
				
				
				if (usernum[0] == 0) {
					printf("���ھ߱������� �����մϴ�.");
					return 0;
				}
				
			}

			printf("����ڰ� �Է��� ���ڴ� : ");
			for (int i = 0; i < 3; i++) {
				printf("%d ", usernum[i]);
			}
			printf("\n");
			// 4) ��ǻ���� 3���� ������ ����ڰ� �Է��� 3���� ���ڰ� �´��� Ȯ���ϰ� s: b: �� ���

			if (cptnum[0] == usernum[0]) {
				s += 1;
			}
			else if (cptnum[0] == usernum[1] || cptnum[0] == usernum[2]) {
				b += 1;
			}

			if (cptnum[1] == usernum[1]) {
				s += 1;
			}
			else if (cptnum[1] == usernum[0] || cptnum[1] == usernum[2]) {
				b += 1;
			}

			if (cptnum[2] == usernum[2]) {
				s += 1;
			}
			else if (cptnum[2] == usernum[0] || cptnum[2] == usernum[1]) {
				b += 1;
			}

			printf("s : %d, b: %d\n", s, b);

			
			if (s == 3) {
				printf("�����մϴ�!");
				printf("�ٽ� �����Ͻðڽ��ϱ�?(Y or N)");
				break;
			} 
			
		}
		scanf_s(" %c", &answer, 1);
		if (answer == 'N') {
			printf("�����մϴ�.");
			return 0;
		}
	}
}