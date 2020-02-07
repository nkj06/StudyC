/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void)
{
    int* pi;
    double* pd;

    pi = (int*)malloc(sizeof(int)); // size 바이트 수 만큼 할당하고 시작 위치 반환
    if (pi == NULL)
    {
        printf("# 메모리가 부족합니다.\n");
        exit(1);
    }
    pd = (double*)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("정수형으로 사용 : %d\n", *pi);
    printf("실수형으로 사용 : %.1lf\n", *pd);

    free(pi);
    free(pd);

    system("pause");
    return EXIT_SUCCESS;
}