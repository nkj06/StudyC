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

void print_ary(int* pa, int size);

// �����Լ�
int main(void)
{
    int ary[5] = { 10, 20, 30, 40, 50 };
    int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

    print_ary(ary, 5);
    printf("\n");
    print_ary(ary2, 7);

    system("pause");
    return EXIT_SUCCESS;
}

// �迭 ��� �Լ�
void print_ary(int* pa, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", pa[i]);
    }
}