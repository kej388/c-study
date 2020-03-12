#include <stdio.h>
#include <malloc.h>			// 메모리 관련 함수를 사용할 때

int main() {
	int* p;					// 정수형 포인터 선언
	int i, hap = 0;
	int cnt;

	printf("입력할 개수는?");
	scanf_s("%d", &cnt);	// 입력할 숫자의 개수를 입력

	p = (int*)malloc(sizeof(int) * cnt);	// 입력한 개수만큼 메모리 확보

	for (i = 0; i < cnt; i++) {		// 입력한 개수만큼 반복
		printf("%d 번째 숫자 :", i + 1);	// 공간이 확보된 포인터 변수 p에 입력받은 숫자를 입력
		scanf_s("%d", p + i);
	}

	for (i = 0; i < cnt; i++) {
		hap += *(p + i);
	}

	printf("입력 숫자 합 == > %d\n", hap);

	free(p);				// 메모리 해제

	// realloc() 함수 사용 예
	int* p1;
	i, hap = 0;
	cnt = 0;
	int data;

	p1 = (int*)malloc(sizeof(int) * 1);
	printf("1번째 숫자 : ");
	scanf_s("%d", &p1[0]);	// 첫번째 값 입력받고, 데이터 하나 증가
	cnt++;

	for (i = 2; ; i++) {	// 조건이 없으므로 무한루프가 된다
		printf("%d번째 숫자:", i);
		scanf_s("%d", &data);	// data변수에 저장 (임시 장소)

		if (data != 0) {
			p1 = (int*)realloc(p1, sizeof(int) * i);	// 메모리 한칸 추가
		}
		else {
			break;			// for문을 빠져 나간다
		}

		p1[i - 1] = data;	// 추가한 메모리 공간에 임시 장소의 값을 대입
		cnt++;
	}

	for (i = 0; i < cnt; i++) {
		hap = hap + p1[i];
	}

	printf("입력 숫자 합 ==> %d\n", hap);

	free(p1);				// 메모리 해제
}