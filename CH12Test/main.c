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

// 메인함수
int main(void) 
{
    char str[80];
    char str2[80];

    while (1)
    {
        printf("문자열을 입력하시오: ");
        scanf("%s", str);

        if (str[0] == 'X') {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        printf("다음 문자열을 입력하시오: ");
        scanf("%s", str2);

        if (str2[0] == 'X') {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        if (strcmp(str, str2) > 0) // strcmp 함수는 두 문자열의 사전 순서를 판단하여 그 결과를 반환
        {
            printf("사전에 나중에 나오는 문자열 : %s\n", str);
            printf("------------------------------\n");
        }
        else
        {
            printf("사전에 나중에 나오는 문자열 : %s\n", str2);
            printf("------------------------------\n");
        }

    }

	system("pause");
	return EXIT_SUCCESS;
}

/*
    두 문자열을 입력 받아 사전에 먼저 나오는 문자열을 출력하는 프로그램
    첫 문자가 대문자 X면 멈춤
*/