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
    /*
    char ch;
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    */
    int num, grade;

    printf("학번 입력 : ");
    scanf("%d", &num);
    getchar();
    printf("학점 입력 : ");
    grade = getchar();
    printf("학번 : %d, 학점 : %c", num, grade);

	system("pause");
	return EXIT_SUCCESS;
}