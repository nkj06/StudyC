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
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);

    printf("5과목 점수를 입력하시오 : ");

    for (i = 0; i < count; i++)
    {
        scanf("%d", &score[i]);
    }

    for (i = 0; i < count; i++)
    {
        total += score[i];
    }
    avg = total / (double)count;

    for (i = 0; i < count; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균 : %.1lf\n", avg);

	system("pause");
	return EXIT_SUCCESS;
}