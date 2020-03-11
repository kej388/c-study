#include <stdio.h>
#include <string.h>

/*
	2.학번,학생명,학과명을 입력받아서 student.txt 에 저장하기(csv형식)

	2019E00001,홍길동,컴퓨터공학과
*/

int main() {
	char studentID[11];
	char studentName[10];
	char department[20];
	FILE *wfp;

	fopen_s(&wfp, "C:\\C_WorkSpace\\student.txt", "w");
	
	printf("학번을 입력하세요 : ");
	gets_s(studentID, 11);

	printf("학생명을 입력하세요 : ");
	gets_s(studentName, 10);

	printf("학과명을 입력하세요 : ");
	gets_s(department, 20);


	fprintf(wfp, "%s,%s,%s", studentID,studentName,department);
	
	fclose(wfp);
}