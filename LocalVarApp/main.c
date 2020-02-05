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

void assign(void);

// 메인함수
int main(void) 
{
    auto int a = 0;

    assign();
    printf("main 함수 a : %d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}

void assign(void) 
{
    int a;

    a = 10;
    printf("assign 함수 a : %d\n", a);
}

/*
    지역 변수는 이름이 같아도 선언된 함수가 다르면 각각 독립된 저장 공간을 갖는다.
*/