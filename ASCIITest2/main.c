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
    int res;
    char ch;

    while (1)
    {
        res = scanf("%c", &ch);
        if (res == -1) break;
        printf("%d ", ch);
    }

    system("pause");
    return EXIT_SUCCESS;
}