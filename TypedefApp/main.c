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

struct student
{
    int num;
    double grade;
};
typedef struct student Student;
void print_data(Student* ps);

// �����Լ�
int main(void) 
{
    Student s1 = { 315, 4.2 };
    print_data(&s1);

	system("pause");
	return EXIT_SUCCESS;
}

void print_data(Student* ps)
{
    printf("�й� : %d\n", ps->num);
    printf("���� : %.1lf\n", ps->grade);
}