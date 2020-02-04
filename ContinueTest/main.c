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
    int i;
    int sum = 0;

    for (i = 1; i <= 100; i++) {
        if ((i % 3) == 0) {
            continue; 
        }
        sum += i;
    }
    /*
    while (i <= 100)
    {
        if ((i % 3) == 0)
        {
            continue; // 증감식이 실행되지 않으므로 무한 반복 됨
        }
        sum += i;
        i++
    }
    */

    printf("누적한 값 : %d\n", sum);

	system("pause");
	return EXIT_SUCCESS;
}
