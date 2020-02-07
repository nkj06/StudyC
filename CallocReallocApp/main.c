/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int* pi;
    int size = 5;
    int count = 0;

    int num;
    int i;

    pi = (int*)calloc(size, sizeof(int)); 
    // (count * size) 바이트 수 만큼 할당하고 0으로 초기화 후 시작 위치 반환

    while (1)
    {
        printf("양수만 입력하세요 => ");
        scanf("%d", &num);
        if (num <= 0) 
            break;
        if (count == size)
        {
            size += 5;
            pi = (int*)realloc(pi, size * sizeof(int)); 
            // p가 연결한 영역의 크기를 size 바이트의 크기로 조정하고 시작 위치 반환
        }
        pi[count++] = num;
    }

    for (i = 0; i < count; i++)
    {
        printf("%5d", pi[i]);
    }

    free(pi);

	system("pause");
	return EXIT_SUCCESS;
}