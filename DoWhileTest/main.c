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
    int a = 1;

    do {
        a = a * 2;
    } 
    while (a < 10);
    printf("a : %d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}
/*
    while�� ������ �����ؾ� �����ϴµ� do ~ while�� ������ ���� �ʴ��� �� ���� ������
*/