/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void)
{
    /*
    char *pary[5];
    int i;

    pary[0] = "dog";
    pary[1] = "elephant";
    pary[2] = "horse";
    pary[3] = "tiger";
    pary[4] = "lion";

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", pary[i]);
    }
    */
    int ary1[4] = { 1, 2, 3, 4 };
    int ary2[4] = { 11, 12, 13, 14 };
    int ary3[4] = { 21, 22, 23, 24 };
    int *pary[4] = { ary1, ary2, ary3 };
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", pary[i][j]);
        }
        printf("\n");
    }


	system("pause");
	return EXIT_SUCCESS;
}