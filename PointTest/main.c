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
    int a = 10, b = 15, total;
    double avg;
    int* pa, * pb; 
    int* pt = &total;
    double* pg = &avg;

    pa = &a; // ������ pa�� ���� a�� �ּ� ����
    pb = &b; // ������ pb�� ���� b�� �ּ� ����

    *pt = *pa + *pb; // a���� b���� ���� total�� ����
    *pg = *pt / 2.0; // total ���� 2�� ���� ���� avg�� ����

    printf("�� ������ �� : %d, %d\n", *pa, *pb); // a���� b�� ���
    printf("�� ������ �� : %d \n", *pt); // total �� ��� 
    printf("�� ������ ��� : %.1lf\n", *pg); // avg �� ��� 

	system("pause");
	return EXIT_SUCCESS;
}