/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - Nam Kyung Jin
*/

/*
  ���� ���� ���α׷�
  ���� ����(��������(���Թ�ȣ, �ѱ��̸�, ����ȣ, �̸���)�� �Է�, ����, ����, �˻�
  ����¿� ���� ����� main �Լ��� �ٸ� �ҽ��� ����ϴ�.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int count = 0;

typedef struct Card {
	char number[SIZE]; // ���� ��ȣ  char Title[SIZE]; // å ����
	char name[SIZE]; // �ѱ� �̸� char caAuthor[SIZE]; // ����
	char phone[SIZE]; // �� ��ȣ
	char e_mail[SIZE]; // �̸��� char ISBN[SIZE]; // ISBN
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
		printf("[���� ���� ���α׷�]\n");
		printf("1. �Է�\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("4. ���\n");
		printf("5. �˻�\n");
		printf("6. ����\n");
		printf("�޴��� �Է��Ͻÿ� : ");
		scanf("%d", &iNum);
		printf("\n");

		if (1 == iNum)	// �߰�
		{
			Stdin = card_Insert(Stdin);
			printf("-----------------------------\n");
		}
		else if (2 == iNum)	// ����
		{
			card_update(Stdin);
			printf("-----------------------------\n");
		}
		else if (3 == iNum)	// ����
		{
			Stdin = card_SelDel(Stdin);
			printf("-----------------------------\n");
		}
		else if (4 == iNum)	// ���
		{
			card_Print(Stdin);
			printf("-----------------------------\n");
		}
		else if (5 == iNum)	// �˻�
		{
			Stdin = card_SelSer(Stdin);
			printf("-----------------------------\n");
		}
		if (6 == iNum) // ����
		{
			card_AllDel(Stdin);
			break;
		}
	}
}

card* input_business_card(card* StpData)
{
	printf("�ѱ� �̸� : ");
	scanf("%s", StpData->name);

	printf("�� ��ȣ : ");
	scanf("%s", StpData->phone);

	printf("�̸��� : ");
	scanf("%s", StpData->e_mail);
	printf("\n");

	StpData->next = 0;

	return StpData;
}

void card_StdOut(card* StpData)
{
	printf("���� ��ȣ : %s \n", StpData->number);
	printf("�ѱ� �̸� : %s \n", StpData->name);
	printf("�� ��ȣ : %s \n", StpData->phone);
	printf("�̸��� : %s \n", StpData->e_mail);
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

card* card_Insert(card* Head) // å �߰�
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

card* card_SelDel(card* Head) // ����
{
	char Dstr[SIZE];
	card* StpFront = Head;
	card* StpRear = Head;

	printf("���Թ�ȣ �Է� : ");
	scanf("%s", Dstr);

	while (0 != StpRear)
	{
		if (0 == strcmp(StpRear->number, Dstr))
		{
			break;
		}
		else {
			printf("�����Ͱ� �����ϴ�.\n\n");
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

	printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
	return Head;
}

card* card_SelSer(card* Head) // �˻�
{
	int iNum;
	char Dstr[SIZE];
	card* StpFront = Head;
	card* StpRear = Head;

	printf("���� �Է� : ");
	scanf("%s", Dstr);

	while (0 != StpRear)
	{
		if (0 == strcmp(StpRear->name, Dstr))	// ��ġ�Ҷ����� �˻�
		{
			break;
		}
		else {
			printf("��ϵ��� ���� å�Դϴ�.\n\n");
			return Head;
		}
		StpFront = StpRear;
		StpRear = StpRear->next;
	}
	if (Head != StpRear) //�߰� Ȥ�� ���κ� ���� ��
	{
		card_StdOut(StpRear);
	}

	else if (Head == StpRear)	 // Head -> Title �� ���� ��
	{
		card_StdOut(StpRear);
	}
	return Head;
}

card* card_update(card* Head) { // ����

	int iNum;
	char Dstr[SIZE];
	card* StpFront = Head;
	card* StpRear = Head;

	printf("�̸��� �Է� : ");
	scanf("%s", Dstr);
	printf("\n");

	while (0 != StpRear)
	{
		if (0 == strcmp(StpRear->e_mail, Dstr))	// ��ġ�Ҷ����� �˻�
		{
			break;
		}
		else {
			printf("��ϵ��� ���� å�Դϴ�.\n\n");
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
	printf("å �̸� : ");
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

	printf("���� : ");
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

	printf("�̸��� : ");
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
