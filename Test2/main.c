/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Nam Kyung Jin
*/

/*
  ������ �������� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.
  �Լ� �Է� : 0-100 ������ ���� (����)
  �Լ� ��ȯ�� : ����
  A : 90-100
  B : 70-89
  C : 60-69
  D : 50-59
  F : 0-39
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int a;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &a);

    if ((a <= 100) && (a >= 90))
        printf("A\n");
    else if ((a <= 89) && (a >= 70))
        printf("B\n");
    else if ((a <= 69) && (a >= 60))
        printf("C\n");
    else if ((a <= 59) && (a >= 50))
        printf("D\n");
    else if ((a <= 49) && (a >= 0))
        printf("F\n");


	system("pause");
	return EXIT_SUCCESS;
}