/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Nam Kyung Jin
*/

/*
  자기참조 구조체 (명칭 NODE) 를 통해서 연결 리스트를 만들고, 데이터는 실수를 담을 수 있도록 한다.
  여기서 insertNode() 함수로 제일마지막에 새 NODE 를 추가, deleteNode(int index)로 원하는 위치의 값을 삭제하게 한다.
  각 작업 후 노드의 갯수만큼 데이터를 출력하는 함수 printNode()를 구현한다

  결론 연결리스트
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct __node {
	double data;
	struct __node* next;
	struct __node* prev;

	struct __node* cur;
	struct __node* head;
	struct __node* tail;
} node;

node* first = NULL;
node* last = NULL;

// 노드 추가 함수
void insertNode(node* L, double tdata) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = tdata;
	newNode->next = NULL;
	if (L->head == NULL && L->tail == NULL)
		L->head = L->tail = newNode;
	else {
		L->tail->next = newNode;
		L->tail = newNode;
	}

	L->cur = newNode;
}

// 노드 삭제 함수
void deleteNode(node* L, double index) {
	//node* p = l->head;
	//while (p->next->next != null) p = p->next;
	//p->next = p->next->next;
	//l->tail = p;

	node* p = L->head;

	if (p == NULL)//첫 노드가 NULL일경우
	{
		return;
	}
	else if (L->head->data == index)//바로다음 노드 데이터 일치시
	{
		L->head = L->head->next;
		return;
	}
	else
	{
		while (p->next != NULL)
		{
			if (p->next->data == index)// 데이터 일치시까지 노드 넘김
			{
				p->next = p->next->next;
				return;
			}
			p = p->next;
		}

	}
}

// 출력 함수
void printNode(node* L) {
	node* p = L->head;
	putchar('[');
	while (p != NULL) {
		printf("%.2lf, ", p->data);
		p = p->next;
	}
	putchar(']');
	putchar('\n');
}

double main(void) {

	node* L = (node*)malloc(sizeof(node));

	L->cur = NULL;
	L->head = NULL;
	L->tail = NULL;
	//linkedList pointer define end

	double in, out;
	int co;

	while (1)
	{
		printf("추가 1, 삭제 2 : ");
		scanf("%d", &co);

		if (co == 1)
		{
			printf("추가 할 노드를 입력하시오 : ");
			scanf("%lf", &in);
			insertNode(L, in);
		}
		else if (co == 2)
		{
			printf("삭제 할 노드를 입력하시오 : ");
			scanf("%lf", &out);
			deleteNode(L, out);
		}
		else
			break;

		printNode(L);

	}
	return 0;
}