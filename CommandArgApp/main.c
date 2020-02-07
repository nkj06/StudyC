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

// 메인함수
int main(int argc, char **argv) // 명령행 인수를 받을 매개변수
{
    int i;

    if (argc <= 1)
    {
        printf("명령 구문이 올바르지 않습니다.");
        exit(1);
    }

    for (i = 0; i < argc; i++) // 인수 개수 만큼 반복
    {
        if (i == 0)
        {
            continue;
        }
        printf("%s\n", argv[i]); // 인수로 받은 문자열 출력
    }
}
// 콘솔 프로그램 짤때 인수를 받을거면 이 과정 필수.