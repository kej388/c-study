#include <stdio.h>

int main() {
	int a = 10, b;

	b = a++;
	printf("%d\n", b);

	b = ++a;
	printf("%d\n", b);

	int a = 10;
	int b = 10;

	printf("a++ = %d\n", a++);
	printf("++b = %d\n", ++b);
}