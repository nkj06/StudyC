/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
	
    int a = 10, b = 20;
    int res = 0;

    res = (a > b) ? a : b; // a > b�� ���� �� res�� a�� ����, ������ �� b�� ���� 
    printf("ū �� : %d\n", res);

	system("pause");
	return EXIT_SUCCESS;
}