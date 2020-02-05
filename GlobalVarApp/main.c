/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

void assign10(void);
void assign20(void);

int a;

// 메인함수
int main(void) 
{
    printf("함수 호출 전 a 값 : %d\n", a);

    assign10();
    assign20();

    printf("함수 호출 후 a 값 : %d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}

void assign10(void)
{
    a = 10;
}
void assign20(void)
{
    a = 20;
}