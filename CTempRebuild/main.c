/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
	
    int a = 10, b = 20;
    int res = 0;

    res = (a > b) ? a : b; // a > b가 참일 때 res에 a를 대입, 거짓일 때 b를 대입 
    printf("큰 값 : %d\n", res);

	system("pause");
	return EXIT_SUCCESS;
}