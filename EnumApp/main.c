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

enum season {SPRING, SUMMER, FALL, WINTER};

// �����Լ�
int main(void) 
{
    enum season ss;
    char* pc = NULL;

    ss = SPRING;
    switch (ss)
    {
    case SPRING:
        pc = "inline"; break;
    case SUMMER:
        pc = "swimming"; break;
    case FALL:
        pc = "trip"; break;
    case WINTER:
        pc = "skiing"; break;
    }
    printf("���� ���� Ȱ�� => %s\n", pc);
    
	system("pause");
	return EXIT_SUCCESS;
}