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

struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;
    int id;
    double grade;
};

// �����Լ�
int main(void) 
{
    struct student nam;
    nam.pf.age = 25;
    nam.pf.height = 168.0;
    nam.id = 315;
    nam.grade = 4.3;

    printf("���� : %d\n", nam.pf.age);
    printf("Ű : %.1lf\n", nam.pf.height);
    printf("�й� : %d\n", nam.id);
    printf("���� : %.1lf\n", nam.grade);
	system("pause");
	return EXIT_SUCCESS;
}