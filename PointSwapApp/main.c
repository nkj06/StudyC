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

void swap_ptr(char** ppa, char** ppb);

// �����Լ�
int main(void) 
{
    char* pa = "success";
    char* pb = "failure";

    printf("pa -> %s, pb -> %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s, pb -> %s\n", pa, pb);

	system("pause");
	return EXIT_SUCCESS;
}

void swap_ptr(char** ppa, char** ppb)
{
    char* pt;

    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}