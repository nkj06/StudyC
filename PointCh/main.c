/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Nam Kyung Jin
*/

void swap(int* pa, int* pb);

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);
 
	system("pause");
	return EXIT_SUCCESS;
}

void swap(int* pa, int* pb) 
{
    int temp; // ��ȯ�� ���� �ӽú���

    temp = *pa; // temp�� pa�� ����Ű�� ������ �� ����
    *pa = *pb; // pa�� ����Ű�� ������ pb�� ����Ű�� ������ �� ����
    *pb = temp; // pb�� ����Ű�� ������ temp �� ����
}