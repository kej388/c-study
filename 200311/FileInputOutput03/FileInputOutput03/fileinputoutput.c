#include <stdio.h>
#include <string.h>

void main() {
	/*// ������ �̿��� ��� ��1

	char str[200];			// ���� ����
	FILE* rfp;				// �б�� ���� ������
	FILE* wfp;				// ����� ���� ������

	fopen_s(&rfp, "C:\\windows\\win.ini", "r");	// �б�� ���� open
	fopen_s(&wfp, "C:\\C_WorkSpace\\data5.txt", "w");	// ����� ���� open

	for (;;) {				// ���ѷ���
		fgets(str, 200, rfp);	// �б�����Ͽ��� �� �� read

		if (feof(rfp)) {		// �б�� ������ �� �� break
			break;
		}

		fputs(str, wfp);	// ����� ���Ͽ� �� �� write
	}

	fclose(rfp);			// �б�� ���� close
	fclose(wfp);			// ����� ���� close

	// ������ �̿��� ��� ��2
	FILE* wfp1;				// ����� ���� ������ ����
	int hap = 0;			
	int in, i;

	fopen_s(&wfp1, "C:\\C_WorkSpace\\data7.txt", "w"); // ���� ���� ��� open

	for (i = 0;i < 5;i++) {		// 5ȸ �ݺ�
		printf("����%d : ", i + 1);
		scanf_s("%d", &in);
		hap += in;
	}

	fprintf_s(wfp1, "�հ� ==> : %d\n", hap);	//�հ踦 ���� write

	fclose(wfp1);			// �����  ���� close */

	// ���Ͽ��� �о�� ���ڿ��� ���Ͽ� �Ųٷ� ���
	FILE *rfp1, *wfp2;		// �б��, ����� ���� ���� ������ ����
	char str1[200], str2[200];	// �Է� ���ڿ�, ��� ���ڿ�, ���� ����
	int size, i1;

	fopen_s(&rfp1, "C:\\C_WorkSpace\\in.txt", "r");	// �Է� ���� open
	fopen_s(&wfp2, "C:\\C_WorkSpace\\out.txt", "w");// ��� ���� open

	while (1) {				// ���ѷ���
		fgets(str1, 200, rfp1);	// �б� ������ ���ڿ� read

		if (feof(rfp1)) {		// �б� ������ ���̸� break;
			break;
		}

		size = strlen(str1);	// �б� ������ ���ڿ��� ũ�⸦ size�� ����
		for (i1 = size - 1; i1 >= 0; i1--) {	// ���ڿ� ũ�� - 1 ��ŭ �ݺ��ϸ� �Է� ���ڿ��� ��� ���ڿ��� ��ġ change
			str2[size - 1 - i1] = str1[i1 - 1];  // ex) str2[200 - 1 - 199] = str1[199 - 1] �� str2[0] = str1[198]
			str2[size - 1] = '\0';	// ��� ���ڿ��� ���� ���� �� ���ڸ� �߰� ex) str2[200 - 1] = '\0' �� str2[199] = '\0'
			fputs(str2, wfp2);		// ��� ���ڿ��� ��� ���Ͽ� write
			fputs("\n", wfp2);		// �ٹٲ�
		}

		fclose(rfp1);			// �б� ���� close
		fclose(wfp2);			// ���� ���� close
	}
}