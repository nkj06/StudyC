/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����� ���� �ڷ��� Structuer �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int id;
    char name[20];
    double grade;
};

// �����Լ�
int main(void) 
{
    struct student s1 = { 315, "ȫ�浿", 2.4 }, // ����ü������� �ʱ�ȭ ���Ѿ���
        s2 = { 316, "�̼���", 3.7 },
        s3 = { 317, "�������", 4.4 };

    struct student max;

    max = s1;
    if (s2.grade > max.grade) max = s2;
    if (s3.grade > max.grade) max = s3;

    printf("�й� : %d\n", max.id);
    printf("�̸� : %s\n", max.name);
    printf("���� : %.1lf\n", max.grade);

	system("pause");
	return EXIT_SUCCESS;
}