#include <stdio.h>

int main(int c, char* path[]) {

	/*
		char* path → path는 포인터인데 path가 가리키는 곳에 char가 있다.
		
		char* path[] → path는 포인터인데 path가 가리키는 곳에서 char 배열이 있다.
		
	*/

	char str[200];
	FILE* rfp;

	fopen_s(&rfp, path[1], "r");

	for (;;) {
		fgets(str, 200, rfp);
		if (feof(rfp)) {
			break;
		}
		printf("%s", str);
	}
	fclose(rfp);

	return 0;
}