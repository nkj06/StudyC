/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Nam Kyung Jin
*/

//1���� 300������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� �� ���� ���

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int sum = 0;
    for (int i = 1; i <= 300; i++)
    {
        if (i % 3 == 0)
            sum = sum + i;
    }

    printf("1���� 300������ ���� �� 3�� ��������� �� �� : %d\n", sum);

	system("pause");
	return EXIT_SUCCESS;
}