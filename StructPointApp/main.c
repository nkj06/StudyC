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

struct score
{
    int kor;
    int eng;
    int math;
};

// �����Լ�
int main(void) 
{
    struct score nam = { 90, 80, 70 };
    struct score* ps = &nam; 

    printf("���� : %d\n", (*ps).kor);
    printf("���� : %d\n", ps->eng);
    printf("���� : %d\n", ps->math);

	system("pause");
	return EXIT_SUCCESS;
}