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
#define SUM(a, b) ((a)+(b))
#define MUL(a, b) ((a)*(b))

// �����Լ�
int main(void) 
{
    int a = 10, b = 20;
    int x = 30, y = 40;
    int res;

    printf("a + b = %d\n", SUM(a, b));
    printf("x + y = %d\n", SUM(x, y));
    res = 30 / MUL(2, 5);
    printf("res : %d\n", res);

	system("pause");
	return EXIT_SUCCESS;
}