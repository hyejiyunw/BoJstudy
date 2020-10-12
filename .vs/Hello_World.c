#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main_hello_world(void) {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= b; i++) {

        for (int j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");


    }

    //오류난 코드, 들여쓰기가 잘못됨
    /*scanf("%d, %d", &a, &b);
    printf(a, b);

    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
    }*/

    //다른 바른 코드
    //들여쓰기 잘할 것
   /*
   int a;
   int b;
   scanf("%d, %d", &a, &b); // 두가지 정수를 한 번에 입력할 때에는, scanf

    for (int i = 1; i <= b; i++)

    {
        for (int j = 1; j <= a; j++)

        {
          printf("*");
        }
      printf("\n");
    }

    */





    return 0;
}
