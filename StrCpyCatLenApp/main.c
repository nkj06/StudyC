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
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char* ps1 = "banana";
    char* ps2 = str2;

    char str[20] = "mango tree";

    char str3[80] = "straw";

    char str4[80], str5[80];
    char* resp;

    printf("[strcpy 함수의 사용법]\n");
    printf("최초 문자열 : %s\n", str1);
    strcpy(str1, str2);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps1);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps2);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, "banana");
    printf("바뀐 문자열 : %s\n", str1);

    printf("\n[strcpy 함수의 사용법]\n");
    strncpy(str, "apple-pie", 5);
    printf("%s\n", str);

    printf("\n[strcat, strncat 함수를 사용한 문자열 붙이기]\n");
    strcat(str3, "berry");
    printf("%s\n", str3);
    strncat(str3, "piece", 3);
    printf("%s\n", str3);

    printf("\n[두 문자열 중 길이가 긴 단어 출력]\n");
    printf("2개의 과일 이름 입력 : ");
    scanf("%s%s", str4, str5);
    if (strlen(str4) > strlen(str5))
        resp = str4;
    else
        resp = str5;
    printf("이름이 긴 과일은 : %s\n", resp);

	system("pause");
	return EXIT_SUCCESS;
}