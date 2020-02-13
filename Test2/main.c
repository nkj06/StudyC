/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Nam Kyung Jin
*/

/*
  점수를 학점으로 변환하는 함수를 작성하시오.
  함수 입력 : 0-100 사이의 점수 (정수)
  함수 반환값 : 학점
  A : 90-100
  B : 70-89
  C : 60-69
  D : 50-59
  F : 0-39
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int a;

    printf("점수를 입력하시오: ");
    scanf("%d", &a);

    if ((a <= 100) && (a >= 90))
        printf("A\n");
    else if ((a <= 89) && (a >= 70))
        printf("B\n");
    else if ((a <= 69) && (a >= 60))
        printf("C\n");
    else if ((a <= 59) && (a >= 50))
        printf("D\n");
    else if ((a <= 49) && (a >= 0))
        printf("F\n");


	system("pause");
	return EXIT_SUCCESS;
}