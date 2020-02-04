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
    int a;
    double b;
    char c;

    printf("int형 변수의 주소 : %u\n", &a);
    printf("double형 변수의 주소 : %u\n", &b);
    printf("char형 변수의 주소 : %u\n", &c);

	system("pause");
	return EXIT_SUCCESS;
}