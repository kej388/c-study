#include <stdio.h>

int main() {
    /*1. 1부터 100까지 홀수만 출력하기*/

    for (int i = 1; i < 100; i = i+2) {
        if (i % 2 == 0) {
            continue;
         }
         printf("%d ", i);
        
    }

    printf("\n");
    //2. 1부터 100까지 3의 배수만 출력하기

    for (int i = 3; i < 100; i = i + 3) {
        if (i % 3 == 1 || i % 3 == 2) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");
    /*3. 다음과 같은 형식으로 출력하시오.이중for문
        *
        **
        ***
        ****
        ******/

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    /*4. 다음과 같은 형식으로 출력하시오.이중for문
        *****
        ****
        ***
        **
        **/

    for (int i = 0; i < 5; i++) {
        for (int j = 5; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    /*5. 다음과 같은 형식으로 출력하시오.이중for문
         *
        ***
       *****
      *******
     **********/
    int k = 1;
    for (int i = 0; i < 5; i++) {
        
        for (int j = 5; j > i; j--) {
            printf(" ");
        }
        for (int j = 0; j < k; j++) {
            printf("*");
        }
        printf("\n");
        k += 2;
    }
    printf("\n");
    //6. 구구단을 가로방향으로 출력하시오.

    for (int i = 1; i < 9; i++) {
        for (int j = 2; j < 10; j++) {
            printf("%d X %d = %d  ", j, i, j * i);
        }
        printf("\n");
    }
}