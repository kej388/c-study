#include <stdio.h>
#include <malloc.h>			// �޸� ���� �Լ��� ����� ��

int main() {
	int* p;					// ������ ������ ����
	int i, hap = 0;
	int cnt;

	printf("�Է��� ������?");
	scanf_s("%d", &cnt);	// �Է��� ������ ������ �Է�

	p = (int*)malloc(sizeof(int) * cnt);	// �Է��� ������ŭ �޸� Ȯ��

	for (i = 0; i < cnt; i++) {		// �Է��� ������ŭ �ݺ�
		printf("%d ��° ���� :", i + 1);	// ������ Ȯ���� ������ ���� p�� �Է¹��� ���ڸ� �Է�
		scanf_s("%d", p + i);
	}

	for (i = 0; i < cnt; i++) {
		hap += *(p + i);
	}

	printf("�Է� ���� �� == > %d\n", hap);

	free(p);				// �޸� ����

	// realloc() �Լ� ��� ��
	int* p1;
	i, hap = 0;
	cnt = 0;
	int data;

	p1 = (int*)malloc(sizeof(int) * 1);
	printf("1��° ���� : ");
	scanf_s("%d", &p1[0]);	// ù��° �� �Է¹ް�, ������ �ϳ� ����
	cnt++;

	for (i = 2; ; i++) {	// ������ �����Ƿ� ���ѷ����� �ȴ�
		printf("%d��° ����:", i);
		scanf_s("%d", &data);	// data������ ���� (�ӽ� ���)

		if (data != 0) {
			p1 = (int*)realloc(p1, sizeof(int) * i);	// �޸� ��ĭ �߰�
		}
		else {
			break;			// for���� ���� ������
		}

		p1[i - 1] = data;	// �߰��� �޸� ������ �ӽ� ����� ���� ����
		cnt++;
	}

	for (i = 0; i < cnt; i++) {
		hap = hap + p1[i];
	}

	printf("�Է� ���� �� ==> %d\n", hap);

	free(p1);				// �޸� ����
}