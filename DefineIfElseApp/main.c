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
#define VER 7
#define BIT16

// �����Լ�
int main(void) 
{
    int max;

#if VER >= 6
    printf("���� %d�Դϴ�.\n", VER);
#endif

#ifdef BIT16
    max = 32767;
#else
    max = 2147483647;
#endif

    printf("int�� ������ �ִ� : %d\n", max);

	system("pause");
	return EXIT_SUCCESS;
}