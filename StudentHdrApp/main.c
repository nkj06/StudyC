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
#include "Student.h"
#define PRINT_EXPR(x) printf(#x " = %d\n", x)
#define NAME_CAT(x,y) (x##y)

// �����Լ�
int main(void) 
{
    int a1, a2;

    NAME_CAT(a, 1) = 10;
    NAME_CAT(a, 2) = 20;
    PRINT_EXPR(a1 + a2);
    PRINT_EXPR(a2 - a1);

    Student a = { 315, "ȫ�浿" };

    printf("�й� : %d, �̸� : %s\n", a.num, a.name);

	system("pause");
	return EXIT_SUCCESS;
}