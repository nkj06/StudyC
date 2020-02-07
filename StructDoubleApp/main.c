/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 사용자 정의 자료형 Structuer 학습
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

// 메인함수
int main(void) 
{
    struct student nam;
    nam.pf.age = 25;
    nam.pf.height = 168.0;
    nam.id = 315;
    nam.grade = 4.3;

    printf("나이 : %d\n", nam.pf.age);
    printf("키 : %.1lf\n", nam.pf.height);
    printf("학번 : %d\n", nam.id);
    printf("학점 : %.1lf\n", nam.grade);
	system("pause");
	return EXIT_SUCCESS;
}