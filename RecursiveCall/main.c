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

void fruit(int count);

int main(void) {

    fruit(1); // 함수 호출

    return 0;
}

void fruit(int count) // 재귀호출 함수 
{
    printf("apple\n"); // 자신을 다시 호출

    if (count == 3) 
        return;

    fruit(count + 1);
    printf("jam\n");
}

/*
    재귀호출 함수는 자기 자신을 호출하는 것
    재귀호출 함수는 최초 호출한 곳이 아니라 이전에 호출했던 곳으로 돌아간다 
*/