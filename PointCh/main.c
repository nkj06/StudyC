/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Nam Kyung Jin
*/

void swap(int* pa, int* pb);

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);
 
	system("pause");
	return EXIT_SUCCESS;
}

void swap(int* pa, int* pb) 
{
    int temp; // 교환을 위한 임시변수

    temp = *pa; // temp에 pa가 가리키는 변수의 값 저장
    *pa = *pb; // pa가 가리키는 변수에 pb가 가리키는 변수의 값 저장
    *pb = temp; // pb가 가리키는 변수에 temp 값 저장
}