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
    char small, cap = 'G';

    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');
    }
    printf("�빮�� : %c %c", cap, '\n');
    printf("�ҹ��� : %c", small);

    system("pause");
    return EXIT_SUCCESS;
}