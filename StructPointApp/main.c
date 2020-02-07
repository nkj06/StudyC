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

struct score
{
    int kor;
    int eng;
    int math;
};

// 메인함수
int main(void) 
{
    struct score nam = { 90, 80, 70 };
    struct score* ps = &nam; 

    printf("국어 : %d\n", (*ps).kor);
    printf("영어 : %d\n", ps->eng);
    printf("수학 : %d\n", ps->math);

	system("pause");
	return EXIT_SUCCESS;
}