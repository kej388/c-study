#include <stdio.h>
#include <string.h>

int main() {
	/*1. id, password�� Ű����� �Է¹޾Ƽ� �迭�� �����ϱ�.(ȸ������).*/

	char id[] = "test"; 
	char password[] = "1111";
	char key_id[10];
	char key_pwd[10];
	int r1, r2;
	int i;

	puts("id�� �Է��ϼ���.");
	gets_s(key_id, 10);
	puts("password�� �Է��ϼ��� : ");
	gets_s(key_pwd, 10);

	
	r1 = strlen(key_id); // id ���ڿ��� ����
	r2 = strlen(key_pwd); // password ���ڿ��� ����
	for (i = 0; i < r1; i++) {
		key_id[i] = key_id[i];
	} // �迭 ����

	for (i = 0;i < r2;i++) {
		key_pwd[i] = key_pwd[i];
	} // �迭 ����

	/*2. Ű����� �Է��� id, password�� 1�� id, password�� ��ġ�ϸ� '�α��εǾ����ϴ�.' ����ϱ�(�α���)*/

	if (strcmp(key_id, id) == 0) {
		printf("�α��� �Ǿ����ϴ�.\n");
	} 
	// strcmp�Լ��� �̿��Ͽ� key_id�� id�� ������ ��ġ�ϸ� �α��οϷ�

	/*3. ����, ����, ���� ������ �Է¹޾Ƽ� �迭�� ������ �� ��� ���ϱ�.for�� ���*/
	int jumsu[3];
	int sum = 0;
	int avg;

	// ���� �Է�
	printf("����, ����, ���������� �Է��ϼ��� : ");
	for (i = 0; i < 3; i++) {
		scanf_s("%d", &jumsu[i]);
	}

	// ������ ��
	for (i = 0; i < 3; i++) {
		sum += jumsu[i];
	}

	avg = sum / 3;

	printf("�� ������ ��� : %d", avg);
}