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

void add_ten(int* pa); // �Ű������� ������ pa ����

// �����Լ�
int main(void) 
{
    int a = 10;

    add_ten(&a); 
    printf("a : %d\n", a); 

	system("pause");
	return EXIT_SUCCESS;
}

void add_ten(int* pa) // ������ pa�� a�� �ּҸ� �޴´�.
{
    *pa = *pa + 10; // ������ pa�� ����Ű�� ������ �� 10����
}