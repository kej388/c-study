#include <stdio.h>

void main() {
	// ������ �̿��� �Է� ��1

	char s[20]; // ���� �迭 ����
	FILE* rfp;	// ���� ������ ����

	fopen_s(&rfp, "C:\\C_WorkSpace\\data1.txt", "r"); // ���� �б�(r) ���� ����. ������ ������ ��δ� '\'�� �� ���� ��� �Ѵ�.

	fgets(s, 20, rfp);

	printf("���Ͽ��� ���� ���ڿ� : ");
	puts(s);	// ȭ�鿡 ���ڿ� ���

	fclose(rfp); // ���� �ݾ��ش�.

	/*
		�����(����, DB, Network)�� �⺻ �۾�����
		1. open
		2. �۾�
		3. close
		=========================================
		MS-DOS
		: MS���� ���� CLI(Command Line Interface)����� OS
		�� MS-Windows�� ��ü��
	*/

	// ������ �̿��� �Է� ��2
	char str[200];	// �ѹ��� �ִ� 199�ڱ��� ���� �� �ֵ��� �迭 ����
	FILE* rfp01;	// ���� ������ ����

	fopen_s(&rfp01, "C:\\windows\\win.ini", "r"); // �о� �� ���� ���� (�ּ�, "���", "�б�(r)")

	for (;;) {						// ���ѷ���
		fgets(str, 200, rfp01);		// ���Ͽ��� �� �پ� �о� �´�.

		if (feof(rfp01))			// eof(end of file) ������ ���̶�� for�� ����
			break;

		printf("%s", str);			// ������ ���� �ƴϹǷ� ���� ���� ���
	}

	fclose(rfp01);					// ������ �ݴ´�.

	// ������ �̿��� �Է� ��3
	FILE* rfp2;						// ���� ������ ����
	int hap = 0;					// �հ� ���� �����ϰ� �ʱ�ȭ
	int in1, i1;					// �о� �� ���� ����, �ݺ��� ���� ���� ����

	fopen_s(&rfp2, "C:\\C_WorkSpace\\data2.txt", "r");	// ���� �б� ���

	for (i1 = 0; i1 < 5; i1++) {	// 5ȸ�ݺ�, ���������Ϳ��� ������ �о� �հ� ����
		fscanf_s(rfp2, "%d", &in1);
		hap += in1;
	}

	printf("�հ� ==> %d\n", hap);	// �հ� ���

	fclose(rfp2);					// ���� ����
}