/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

void print_ary(int(*pa)[4]);

// 메인함수
int main(void) 
{
    int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

    print_ary(ary);

	system("pause");
	return EXIT_SUCCESS;
}

void print_ary(int(*pa)[4])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
}