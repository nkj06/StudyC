/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    char str[80];
    char str2[80];

    printf("���ڿ� �Է� : ");
    gets(str);
    puts("�Էµ� ���ڿ� : ");
    puts(str);

    strcpy(str, "tiger");
    strcpy(str2, str);

    printf("%s, %s\n", str, str2);

	system("pause");
	return EXIT_SUCCESS;
}