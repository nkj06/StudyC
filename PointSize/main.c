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
    char ch;
    int in;
    double db;

    char* pc = &ch;
    int* pi = &in;
    double* pd = &db;

    printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
    printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
    printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

    printf("char형 변수의 주소 크기 : %d\n", sizeof(pc));
    printf("int형 변수의 주소 크기 : %d\n", sizeof(pi));
    printf("double형 변수의 주소 크기 : %d\n", sizeof(pd));

    printf("char형 변수의 주소 크기 : %d\n", sizeof(*pc));
    printf("int형 변수의 주소 크기 : %d\n", sizeof(*pi));
    printf("double형 변수의 주소 크기 : %d\n", sizeof(*pd));

	system("pause");
	return EXIT_SUCCESS;
}