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

    for (i = 1; i <= 100; i++) {
        if ((i % 3) == 0) {
            continue; 
        }
        sum += i;
    }
    /*
    while (i <= 100)
    {
        if ((i % 3) == 0)
        {
            continue; // �������� ������� �����Ƿ� ���� �ݺ� ��
        }
        sum += i;
        i++
    }
    */

    printf("������ �� : %d\n", sum);

	system("pause");
	return EXIT_SUCCESS;
}
