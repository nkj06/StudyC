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
    int a;
    double b;
    char c;

    printf("int�� ������ �ּ� : %u\n", &a);
    printf("double�� ������ �ּ� : %u\n", &b);
    printf("char�� ������ �ּ� : %u\n", &c);

	system("pause");
	return EXIT_SUCCESS;
}