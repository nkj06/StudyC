/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    FILE* fp;
    char str[] = "banana";
    int ch;

    fp = fopen("a.txt", "w");
    if (fp == NULL)
    {
        printf("������ ������ �ʾҽ��ϴ�.\n");
        return 1;
    }
    //printf("������ ���Ƚ��ϴ�.\n");

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