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
    int i;
    int sum = 0;

    for (i = 1; i <= 10; i++) {
        sum += i;
        if (sum > 30) break;
    }

    printf("������ �� : %d\n", sum);

    system("pause");
    return EXIT_SUCCESS;
}