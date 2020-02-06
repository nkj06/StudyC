/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", num[i][j]);
        }
        printf("\n");
    }

    char animal[5][20];
    int count;

    count = sizeof(animal) / sizeof(animal[0]); // 행의 수 계산

    for (i = 0; i < count; i++) 
    {
        scanf("%s", animal[i]);
    }

    for (i = 0; i < count; i++)
    {
        printf("%s  ", animal[i]);
    }

	system("pause");
	return EXIT_SUCCESS;
}