/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    char str[80] = "apple juice";;
    char *ps = "banana";

    puts(str);
    fputs(ps, stdout);
    puts("milk");

	system("pause");
	return EXIT_SUCCESS;
}