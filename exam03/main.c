/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

struct Info {
	int number; // 명함 번호
	char name[SIZE]; // 한글 이름 
	char phone[SIZE]; // 폰 번호
	char e_mail[SIZE]; // 이메일
};

int count = 0;

void input_business_card(struct Info* info)
{
	count = count + 1;
	info->number = count;

	printf("한글 이름 : ");
	scanf("%s", info->name);

	printf("폰 번호 : ");
	scanf("%s", info->phone);

	printf("이메일 : ");
	scanf("%s", info->e_mail);

	printf("\n");
}

void edit_business_card()
{

}

void search_business_card()
{

}

void delete_business_card()
{

}

void show_all_cards()
{

}

int main()
{
	struct Info info;

	int iNum;

	while (1)
	{
		printf("[명함 관리 프로그램]\n");
		printf("1. 입력\n");
		printf("2. 수정\n");
		printf("3. 삭제\n");
		printf("4. 출력\n");
		printf("5. 검색\n");
		printf("6. 종료\n");
		printf("메뉴를 입력하시오 : ");
		scanf("%d", &iNum);
		printf("\n");

		if (1 == iNum)	// 추가
		{
			input_business_card(&info);
			printf("-----------------------------\n");
		}
		else if (2 == iNum)	// 수정
		{
			edit_business_card();
			printf("-----------------------------\n");
		}
		else if (3 == iNum)	// 삭제
		{
			delete_business_card();
			printf("-----------------------------\n");
		}
		else if (4 == iNum)	// 출력
		{
			show_all_cards();
			printf("-----------------------------\n");
		}
		else if (5 == iNum)	// 검색
		{
			search_business_card();
			printf("-----------------------------\n");
		}
		if (6 == iNum) // 종료
		{
			break;
		}
	}
}