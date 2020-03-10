#include <stdio.h>

int a1 = 100;

void func1() {
	int a1 = 200;
	printf("func1()에서 a1의 값 ==> %d\n", a1);
}

int plus(int v1, int v2) {
	int result;
	result = v1 + v2;
	return result;
}

int calc(int v1, int v2, int op) {
	int result;

	switch (op) {
	case 1: result = v1 + v2; break;
	case 2: result = v1 - v2; break;
	case 3: result = v1 * v2; break;
	case 4: result = v1 / v2; break;
	}

	return result;
}

void func2() {
	printf("void형 함수는 돌려줄게 없음.\n");
}

int func3() {
	return 100;
}

int sum(int a, int b) {
	return a + b;
}

int printResult(int result) {
	printf("result : %d\n", result);
}

void func4(int* a) {
	*a = *a + 1;
	printf("전달받은 a ==> %d\n", *a);
}

void func5(char a, char b) {
	int imsi;

	imsi = a;
	a = b;
	b = imsi;
}

void func6(char* a, char* b) {
	int imsi;

	imsi = *a;
	*a = *b;
	*b = imsi;
}

int main() {
	// 본격적인 함수 사용 예 1
	int hap;

	hap = plus(100, 200);

	printf("100과 200의 plus()함수 결과는 : %d\n", hap);

	// 본격적인 함수 사용 예 2
	int res;
	int oper, a, b;

	printf("계산 입력 (1: +, 2 : -, 3 : *, 4 : /) : ");
	scanf_s("%d", &oper);

	printf("계산할 두 숫자를 입력 : ");
	scanf_s("%d %d", &a, &b);

	res = calc(a, b, oper);

	printf("계산 결과는 : %d\n", res);

	// 지역변수와 전역변수의 구분
	func1();
	printf("main()에서 a1의 값 ==> %d\n", a1);

	// 반환값 유무에 따른 함수 비교
	int a02;

	func2();

	a02 = func3();
	printf("int형 함수에서 돌려준 값 ==> %d\n", a02);

	// 함수유형
	int result = sum(10, 20);
	printf("result : %d\n", result);
	printf("result: %d\n", sum(30, 40));

	printResult(sum(2000, 3000));

	/*
		함수의 매개변수에 따른 분류

		1. Call by Value
		: 매개변수가 일반적인 변수인 경우

		2. Call by Address
		: 매개변수가 포인터인 경우

		3. Call by Reference
		: 매개변수가 참조(값)인 경우
		: JAVA, C#, C++ 등 객체지향언어
	*/

	/*
		main()함수의 지역변수를

		func1()에서 사용(접근)할 수 있게 하려면 매대변수를 포인터로 선언하는 방법이 있다
	*/
	int a03 = 10;

	func4(&a03);
	printf("func4() 실행 후의 a03 => %d\n", a03);

	// 매개변수 전달 방법 비교
	char x = 'A', y = 'Z';

	printf("원래 값 x = %c, y = %c\n", x, y);

	func5(x, y);
	printf("값을 전달한 후 x = %c, y = %c\n", x, y);

	func6(&x, &y);
	printf("주소를 전달한 후 x=%c, y=%c\n", x, y);
}