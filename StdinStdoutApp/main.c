/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*
    int ch;

    while (1)
    {
        ch = fgetc(stdin);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, stdout);
    }
    */
    FILE* fp;
    int ary[10] = { 13,10,13,13,10,26,13,10,13,10 };
    int i, res;

    fp = fopen("a.txt", "wb");
    for (i = 0; i < 10; i++)
    {
        fputc(ary[i], fp);
    }
    fclose(fp);

    fp = fopen("a.txt", "rt");

    while (1)
    {
        res = fgetc(fp);
        if (res == EOF)break;
        printf("%4d", res);
    }
    fclose(fp);
	system("pause");
	return EXIT_SUCCESS;
}