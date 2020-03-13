#include <stdio.h>

int main(int argc, char* argv[]) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("매개변수의 갯수 : %d\n", argc);
		printf("%d번째 매개변수 값 : %s\n", i + 1, argv[0]);
	}

	char str[200];
	FILE* rfp;

	if (argc != 2) {
		printf("\n -- 매개변수를 1개 사용하세요 -- \n");
		return 0;
	}

	fopen_s(&rfp, argv[1], "r");

	for (;;) {
		fgets(str, 199, rfp);

		if (feof(rfp))
			break;

		printf("%s", str);
	}

	fclose(rfp);

}

