#include <stdio.h>
#include <string.h>

/*
	2.�й�,�л���,�а����� �Է¹޾Ƽ� student.txt �� �����ϱ�(csv����)

	2019E00001,ȫ�浿,��ǻ�Ͱ��а�
*/

int main() {
	char studentID[11];
	char studentName[10];
	char department[20];
	FILE *wfp;

	fopen_s(&wfp, "C:\\C_WorkSpace\\student.txt", "w");
	
	printf("�й��� �Է��ϼ��� : ");
	gets_s(studentID, 11);

	printf("�л����� �Է��ϼ��� : ");
	gets_s(studentName, 10);

	printf("�а����� �Է��ϼ��� : ");
	gets_s(department, 20);


	fprintf(wfp, "%s,%s,%s", studentID,studentName,department);
	
	fclose(wfp);
}