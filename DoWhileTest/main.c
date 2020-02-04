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
    int a = 1;

    do {
        a = a * 2;
    } 
    while (a < 10);
    printf("a : %d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}
/*
    while은 조건을 만족해야 실행하는데 do ~ while은 조건이 맞지 않더라도 한 번은 실행함
*/