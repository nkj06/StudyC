/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int a = 10;
    int* pi;
    int** ppi;

    pi = &a;
    ppi = &pi;

    printf("----------------------------------------------\n");
    printf("����    ������     &����      *����     **����\n");
    printf("----------------------------------------------\n");
    printf("  a%10d %10u\n", a, &a);
    printf(" pi%10u %10u %10d\n", pi, &pi, *pi);
    printf("ppi%10u %10u %10u%10u\n", ppi, &ppi, *ppi, **ppi);
    printf("----------------------------------------------\n");

	system("pause");
	return EXIT_SUCCESS;
}