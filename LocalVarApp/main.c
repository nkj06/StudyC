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

void assign(void);

// �����Լ�
int main(void) 
{
    auto int a = 0;

    assign();
    printf("main �Լ� a : %d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}

void assign(void) 
{
    int a;

    a = 10;
    printf("assign �Լ� a : %d\n", a);
}

/*
    ���� ������ �̸��� ���Ƶ� ����� �Լ��� �ٸ��� ���� ������ ���� ������ ���´�.
*/