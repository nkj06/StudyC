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
    char ch;
    int in;
    double db;

    char* pc = &ch;
    int* pi = &in;
    double* pd = &db;

    printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
    printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
    printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));

    printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(pc));
    printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(pi));
    printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(pd));

    printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(*pc));
    printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(*pi));
    printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(*pd));

	system("pause");
	return EXIT_SUCCESS;
}