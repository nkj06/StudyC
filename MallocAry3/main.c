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

void print_str(char** ps);

// 메인함수
int main(void) 
{
    /*
    char temp[80];
    char* str[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("문자열을 입력하세요 : ");
        gets(temp);
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);
    }

    for (i = 0; i < 3; i++)
    {
        free(str[i]);
    }
    */
    char temp[80]; // 임시 char 배열
    char* str[21] = { 0 }; // 동적 할당 영역을 연결할 포인터 배열
    int i = 0; // 반복 제어 변수 

    while (i < 20)
    {
        printf("문자열을 입력하세요 : ");
        gets(temp); // 문자열 입력
        if (strcmp(temp, "end") == 0) break; // end가 입력되면 반복 종료
        str[i] = (char*)malloc(strlen(temp) + 1); // 문자열 저장 공간 할당
        strcpy(str[i], temp); // 동적 할당 영역에 문자열 복사
        i++;
    }
    print_str(str); // 입력한 문자열 출력 

    for (i = 0; str[i] != NULL; i++) // str에 연결된 문자열이 없을 때까지
    {
        free(str[i]); // 동적 할당 영역 변환 
    }

	system("pause");
	return EXIT_SUCCESS;
}

void print_str(char** ps)
{
    while (*ps != NULL)
    {
        printf("%s\n", *ps);
        ps++;
    }
}