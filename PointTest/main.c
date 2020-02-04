/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int a = 10, b = 15, total;
    double avg;
    int* pa, * pb; 
    int* pt = &total;
    double* pg = &avg;

    pa = &a; // 포인터 pa에 변수 a의 주소 대입
    pb = &b; // 포인터 pb에 변수 b의 주소 대입

    *pt = *pa + *pb; // a값과 b값을 더해 total에 저장
    *pg = *pt / 2.0; // total 값을 2로 나눈 값을 avg에 저장

    printf("두 정수의 값 : %d, %d\n", *pa, *pb); // a값과 b값 출력
    printf("두 정수의 합 : %d \n", *pt); // total 값 출력 
    printf("두 정수의 평균 : %.1lf\n", *pg); // avg 값 출력 

	system("pause");
	return EXIT_SUCCESS;
}