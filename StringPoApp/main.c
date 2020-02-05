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
    char* dessert = "apple";
    char str[80];
    char str2[80];

    int age;
    char name[20];

    printf("[문자열 상수가 주소란 증거]\n");
    printf("apple이 저장된 주소 값 : %p\n", "apple");
    printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
    printf("첫 번째 문자 : %c\n", *"apple");
    printf("두 번째 문자 : %c\n", *("apple" + 1));
    printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

    printf("\n[포인터로 문자열을 사용하는 방법]\n");
    printf("오늘 후식은 %s 입니다.\n", dessert);
    dessert = "banana";
    printf("내일 후식은 %s 입니다.\n", dessert);

    printf("\n[gets 함수로 한줄의 문자열 입력]\n");
    printf("공백이 포함된 문자열 입력 : ");
    gets(str);
    printf("입력한 문자열은 %s입니다.\n", str);

    printf("\n[fgets 함수의 문자열 입력 방법]\n");
    printf("공백이 포함된 문자열 입력 : ");
    fgets(str2, sizeof(str), stdin); // fgets(배열명, 배열의 크기 확인), 표준입력);
    printf("입력한 문자열은 %s입니다.\n", str2);

    printf("\n[개방 문자로 인해 gets 함수가 입력을 못하는 경우]\n");
    printf("나이 입력 : ");
    scanf("%d", &age);
    getchar(); // 버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림
    printf("이름 입력 : ");
    gets(name);
    printf("나이 : %d, 이름 : %s\n", age, name);

    /*
    scanf는 중간에 공백이 포함된 문자열을 한 번에 입력할 수 없는데,
    gets는 중간의 공백이나 탭 문자를 포함하여 문자열 한 줄을 입력한다.
    fgets는 최대 배열의 크기까지만 문자열을 입력 (scanf와 gets는 할당되지 않은 메모리 공간을 침범)
            '배열크기 - 1'
    */

	system("pause");
	return EXIT_SUCCESS;
}
