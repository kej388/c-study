#include <stdio.h>
#include <string.h>

int main() {
	// ���ڿ� ����� �Լ� ��� ��
	char s[20];

	printf("���ڿ��� �Է� : ");
	gets_s(s, 20);

	puts(s);

	/*
		����(buffer) 
		: cpu�� �ֺ����(���������ġ��) �� �ӵ����̶����� ���� �޸� �����
		
	*/

	// ���ڿ� ����� �Լ� ��� ��2
	char ch;

	ch = getch(); // ���� �� �ڸ� �Է� �޴´�
	putch(ch); // ���ۿ��� �� ���ڸ� �о ȭ�鿡 ����Ѵ�

	ch = getch();
	putch(ch);

	ch = getch();
	putch(ch);
	printf("\n");

	// ���� ����� �Լ� ��� ��3
	char password[5] = "5678";
	char input[5];
	int i;

	printf("��й�ȣ 4���ڸ� �Է��ϼ��� : ");
	for (i = 0; i < 4; i++) {
		input[i] = getch();
	}

	if (strncmp(password, input, 4) == 0) {
		printf("\n��й�ȣ ��� ~~\n");
	}
	else {
		printf("\n�Է��� ��й�ȣ : ");
		for (i = 0; i < 4; i++) {
			putch(input[i]);
		}
		printf(" �� Ʋ����\n");
	}

	// ���� ����� �Լ� ��� ��4
	char ch1;

	ch1 = getche(); // ���� �� �ڸ� �Է� �ް�, ȭ�鿡�� �����ش�

	ch1 = getche();

	ch1 = getche();
}