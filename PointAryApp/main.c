/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

void print_str(char** pps, int cnt);

// 메인함수
int main(void) 
{
    char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
    int count;

    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary, count);

    int ary[5];

    printf("  ary의 값 : %u\t", ary);
    printf("ary의 주소 : %u\n", &ary);
    printf("   ary + 1 : %u\t", ary + 1);
    printf("  &ary + 1 : %u\n", &ary + 1);

	system("pause");
	return EXIT_SUCCESS;
}

void print_str(char** pps, int cnt)
{
    int i;

    for (i = 0; i < cnt; i++)
    {
        printf("%s\n", pps[i]);
    }
}

// 포인터를 사용할때 &달고 출력하면 주소를 알려주고, 그냥 쓰면 그 주소가 가지고 있는 값을 출력