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
    char str[80];
    char str2[80];

    printf("문자열 입력 : ");
    gets(str);
    puts("입력된 문자열 : ");
    puts(str);

    strcpy(str, "tiger");
    strcpy(str2, str);

    printf("%s, %s\n", str, str2);

	system("pause");
	return EXIT_SUCCESS;
}