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

void add_ten(int* pa); // 매개변수로 포인터 pa 선언

// 메인함수
int main(void) 
{
    int a = 10;

    add_ten(&a); 
    printf("a : %d\n", a); 

	system("pause");
	return EXIT_SUCCESS;
}

void add_ten(int* pa) // 포인터 pa가 a의 주소를 받는다.
{
    *pa = *pa + 10; // 포인터 pa가 가리키는 변수의 값 10증가
}