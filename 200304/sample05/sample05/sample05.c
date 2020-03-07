#include <stdio.h>

int main() {
	/*char a, b, c;

	a = 'A';
	printf(" %c", a);
	printf(" %d\n", a);

	b = 'a';
	c = b + 5;
	printf(" %c\n", b);
	printf(" %c\n", c);

	c = 90;
	printf(" %c\n", c);

	char str1[10];
	char str2[10];
	char str3[10] = "Cookbook";

	strcpy(str1, "Basic-C");
	strcpy(str2, str3);

	printf("str1 ==> %s\n", str1);
	printf("str2 ==> %s\n", str2);
	printf("str3 ==> %s\n", str3);*/

	/*int a, b = 5, c = 3;

	a = b + c;
	printf("%d + %d = %d\n", b, c, a);

	a = b - c;
	printf("%d - %d = %d\n", b, c, a);

	a = b / c;
	printf("%d / %d = %d\n", b, c, a);

	a = b % c;
	printf("%d % %d = %d\n", b, c, a);*/

	int a = 10;

	a++;
	printf("a++ ==> %d\n", a);

	a--;
	printf("a-- ==> %d\n", a);

	a += 5;
	printf("a += 5 ==> %d\n", a);

	a -= 5;
	printf("a -= 5 ==> %d\n", a);

	a *= 5;
	printf("a *= 5 ==> %d\n", a);

	a /= 5;
	printf("a /= 5 ==> %d\n", a);

	a %= 5;
	printf("a %= 5 ==> %d\n", a);
}