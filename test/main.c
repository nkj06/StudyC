/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - Nam Kyung Jin
*/

/*
  명함 관리 프로그램
  명함 정보(명함정보(명함번호, 한글이름, 폰번호, 이메일)의 입력, 수정, 삭제, 검색
  입출력에 대한 기능은 main 함수와 다른 소스에 만듭니다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int count = 0;

typedef struct Card {
	char number[SIZE]; // 명함 번호  char Title[SIZE]; // 책 제목
	char name[SIZE]; // 한글 이름 char caAuthor[SIZE]; // 저자
	char phone[SIZE]; // 폰 번호
	char e_mail[SIZE]; // 이메일 char ISBN[SIZE]; // ISBN
	struct card* next;
} card;

card* input_business_card(card* StpData);
void card_StdOut(card* StpData);
void card_AllDel(card* StpData);
void Inmenu(card* Stdin);
card* card_Insert(card* Head);
card* card_SelDel(card* Head);
card* card_SelSer(card* Head);
card* Modiname(card* StpRear);
card* Modiphone(card* StpRear);
card* Modie_mail(card* StpRear);
card* card_update(card* Head);
void card_Print(card* Head);

int main()
{
	card* Head = 0;
	Inmenu(Head);
	free(Head);

	return 0;
}

void Inmenu(card* Stdin)
{
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
			Stdin = card_Insert(Stdin);
			printf("-----------------------------\n");
		}
		else if (2 == iNum)	// 수정
		{
			card_update(Stdin);
			printf("-----------------------------\n");
		}
		else if (3 == iNum)	// 삭제
		{
			Stdin = card_SelDel(Stdin);
			printf("-----------------------------\n");
		}
		else if (4 == iNum)	// 출력
		{
			card_Print(Stdin);
			printf("-----------------------------\n");
		}
		else if (5 == iNum)	// 검색
		{
			Stdin = card_SelSer(Stdin);
			printf("-----------------------------\n");
		}
		if (6 == iNum) // 종료
		{
			card_AllDel(Stdin);
			break;
		}
	}
}

card* input_business_card(card* StpData)
{
	printf("한글 이름 : ");
	scanf("%s", StpData->name);

	printf("폰 번호 : ");
	scanf("%s", StpData->phone);

	printf("이메일 : ");
	scanf("%s", StpData->e_mail);
	printf("\n");

	StpData->next = 0;

	return StpData;
}

void card_StdOut(card* StpData)
{
	printf("명함 번호 : %s \n", StpData->number);
	printf("한글 이름 : %s \n", StpData->name);
	printf("폰 번호 : %s \n", StpData->phone);
	printf("이메일 : %s \n", StpData->e_mail);
	printf("\n");
}

void card_AllDel(card* StpData)
{
	card* Stpnext;

	while (0 != StpData)
	{
		Stpnext = StpData->next;
		free(StpData);
		StpData = Stpnext;
	}
}

card* card_Insert(card* Head) // 책 추가
{
	card* StpNew = (card*)malloc(sizeof(card));
	card* StpFront = Head;
	card* StpRear = Head;

	StpNew = input_business_card(StpNew);
	StpNew->next = 0;

	while (0 != StpRear)
	{
		if (0 < strcmp(StpRear->name, StpNew->name))
		{
			break;
		}
		StpFront = StpRear;
		StpRear = StpRear->next;
	}
	if (Head != StpRear)
	{
		StpNew->next = StpRear;
		StpFront->next = StpNew;
	}
	else
	{
		StpNew->next = Head;
		Head = StpNew;
	}
	return Head;
}

card* card_SelDel(card* Head) // 삭제
{
	char Dstr[SIZE];
	card* StpFront = Head;
	card* StpRear = Head;

	printf("명함번호 입력 : ");
	scanf("%s", Dstr);

	while (0 != StpRear)
	{
		if (0 == strcmp(StpRear->number, Dstr))
		{
			break;
		}
		else {
			printf("데이터가 없습니다.\n\n");
			return Head;
		}

		StpFront = StpRear;
		StpRear = StpRear->next;
	}
	if (Head != StpRear)
	{
		StpFront = StpRear->next;
		Head->next = StpFront;
		free(StpRear);
	}

	else if (Head == StpRear)
	{
		Head = Head->next;
		free(StpRear);
	}

	printf("삭제가 완료되었습니다.\n\n");
	return Head;
}

card* card_SelSer(card* Head) // 검색
{
	int iNum;
	char Dstr[SIZE];
	card* StpFront = Head;
	card* StpRear = Head;

	printf("명함 입력 : ");
	scanf("%s", Dstr);

	while (0 != StpRear)
	{
		if (0 == strcmp(StpRear->name, Dstr))	// 일치할때까지 검색
		{
			break;
		}
		else {
			printf("등록되지 않은 책입니다.\n\n");
			return Head;
		}
		StpFront = StpRear;
		StpRear = StpRear->next;
	}
	if (Head != StpRear) //중간 혹은 끝부분 삽입 시
	{
		card_StdOut(StpRear);
	}

	else if (Head == StpRear)	 // Head -> Title 을 지울 때
	{
		card_StdOut(StpRear);
	}
	return Head;
}

card* card_update(card* Head) { // 수정

	int iNum;
	char Dstr[SIZE];
	card* StpFront = Head;
	card* StpRear = Head;

	printf("이메일 입력 : ");
	scanf("%s", Dstr);
	printf("\n");

	while (0 != StpRear)
	{
		if (0 == strcmp(StpRear->e_mail, Dstr))	// 일치할때까지 검색
		{
			break;
		}
		else {
			printf("등록되지 않은 책입니다.\n\n");
			return Head;
		}

		StpFront = StpRear;
		StpRear = StpRear->next;
	}

	StpRear = Modiname(StpRear);
	StpRear = Modiphone(StpRear);
	StpRear = Modie_mail(StpRear);

	return Head;
}

card* Modiname(card* StpRear)
{
	char Dstr[SIZE];
	int icnt;
	printf("책 이름 : ");
	scanf("%s", Dstr);

	for (icnt = 0; 0 != Dstr[icnt]; ++icnt)
	{
		StpRear->name[icnt] = Dstr[icnt];
	}
	StpRear->name[icnt] = 0;

	return StpRear;
}

card* Modiphone(card* StpRear)
{
	char Dstr[SIZE];
	int icnt;

	printf("저자 : ");
	scanf("%s", Dstr);

	for (icnt = 0; 0 != Dstr[icnt]; ++icnt)
	{
		StpRear->phone[icnt] = Dstr[icnt];
	}
	StpRear->phone[icnt] = 0;

	return StpRear;
}

card* Modie_mail(card* StpRear)
{
	char Dstr[SIZE];
	int icnt;

	printf("이메일 : ");
	scanf("%s", Dstr);
	printf("\n");

	for (icnt = 0; 0 != Dstr[icnt]; ++icnt)
	{
		StpRear->e_mail[icnt] = Dstr[icnt];
	}
	StpRear->e_mail[icnt] = 0;

	return StpRear;
}

void card_Print(card* Head)
{
	while (0 != Head)
	{
		card_StdOut(Head);
		if (0 != Head->next)
		{
			printf("\n");
		}
		Head = Head->next;
	}

}
