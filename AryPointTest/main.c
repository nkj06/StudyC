/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void)
{
    /*
    int ary[3];
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("세 번째 배열 요소에 키보드 입력 : ");
    scanf("%d", ary + 2);

    for (i = 0; i < 3; i++)
    {
        printf("%5d", *(ary + i));
    }
    */

    int ary[3] = { 10, 20, 30 };
    int* pa = ary;
    int i;

    printf("배열의 값 : ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *pa);
        pa++;
    }

    system("pause");
    return EXIT_SUCCESS;
}