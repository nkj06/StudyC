/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Nam Kyung Jin
*/

//1부터 300사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총 합을 출력

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int sum = 0;
    for (int i = 1; i <= 300; i++)
    {
        if (i % 3 == 0)
            sum = sum + i;
    }

    printf("1부터 300사이의 정수 중 3의 공배수들의 총 합 : %d\n", sum);

	system("pause");
	return EXIT_SUCCESS;
}