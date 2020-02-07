/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int big(int a, int b);

// �����Լ�
int main(void) 
{
    int sel;

    printf("01 �� ������ ��\n");
    printf("02 �� ������ ��\n");
    printf("03 �� ���� �߿��� ū �� ���\n");
    printf("���ϴ� ������ �����ϼ��� : ");
    scanf("%d", &sel);

    switch (sel)
    {
    case 1: func(sum); break;
    case 2: func(mul); break;
    case 3: func(big); break;
    }

	system("pause");
	return EXIT_SUCCESS;
}

void func(int (*fp)(int, int))
{
    int a, b;
    int res;

    printf("�� ������ ���� �Է��ϼ��� : ");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("������� : %d\n", res);
}

int sum(int a, int b)
{
    return (a + b);
}

int mul(int a, int b)
{
    return (a * b);
}   

int big(int a, int b)
{
    if(a > b) 
        return a;
    else 
        return b;
}