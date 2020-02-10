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
    FILE* fp;
    char str[] = "banana";
    int ch;

    fp = fopen("a.txt", "w");
    if (fp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    //printf("파일이 열렸습니다.\n");

    int i = 0;
    
    while (str[i] != '\0')
    {
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);
    fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}