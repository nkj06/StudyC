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

union student
{
    int num;
    double grade;
};
// �����Լ�
int main(void) 
{
    union student s1 = { 315 };

    printf("�й� : %d\n", s1.num);
    s1.grade = 4.4;
    printf("���� : %.1lf\n", s1.grade);
    printf("�й� : %d\n", s1.num);

	system("pause");
	return EXIT_SUCCESS;
}