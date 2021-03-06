/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

int input_data(void);
double average(void);
void print_data(double);

int count = 0;
static int total = 0;

// 메인함수
int main(void) 
{
    double avg;

    total = input_data();
    avg = average();
    print_data(avg);

	system("pause");
	return EXIT_SUCCESS;
}

void print_data(double avg)
{
    printf("입력한 양의 개수 : %d\n", count);
    printf("전체 합과 평균 : %d, %.1lf\n", total, avg);
}