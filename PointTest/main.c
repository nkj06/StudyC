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
    /*
    int a;
    double b;
    char c;

    printf("int�� ������ �ּ� : %u\n", &a);  // �ּ� �����ڷ� �ּ� ���, &�� �ּҿ����� ��ġ�� Ȯ��
    printf("double�� ������ �ּ� : %u\n", &b);
    printf("char�� ������ �ּ� : %u\n", &c);
    */

    /*
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
    */

    int a = 10, b = 20;
    const int* pa = &a; // ������ pa�� ���� a�� ����Ų��.

    printf("���� a �� : %d\n", *pa); // �����͸� ���� �����Ͽ� a ���
    pa = &b;                         // �����Ͱ� ���� b�� ����Ű�� �Ѵ�.
    printf("���� b �� : %d\n", *pa); // �����͸� ���� �����Ͽ� b ���
    pa = &a;                         // �����Ͱ� �ٽ� ���� a�� ����Ų��.
    a = 20;                          // a�� ���� �����Ͽ� ���� �ٲ۴�.
    printf("���� a �� : %d\n", *pa); // �����ͷ� ���� �����Ͽ� �ٲ� �� ���

	system("pause");
	return EXIT_SUCCESS;
}