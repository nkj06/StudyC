/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>
#define VER 7
#define BIT16

// 메인함수
int main(void) 
{
    int max;

#if VER >= 6
    printf("버전 %d입니다.\n", VER);
#endif

#ifdef BIT16
    max = 32767;
#else
    max = 2147483647;
#endif

    printf("int형 변수의 최댓값 : %d\n", max);

	system("pause");
	return EXIT_SUCCESS;
}