#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {

	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("[��� �������� ���ϴ� ����]\n");
	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 4;
	post = (b++) * 4;

	printf("\n[���� ǥ��� ���� ǥ�⸦ ����� ���� ����]\n");
	printf("�ʱ갪 a = %d, b = %d\n", a, b);
	printf("������ : (++a) * 4 = %d, ������ : (b++) * 4 = %d\n", pre, post);

	int c = 30;
	int res;

	printf("\n[�� ������ ����� Ȯ��]\n");
	res = (c > 10) && (c < 20);
	printf("(c > 10) && (c < 20) : %d\n", res);
	res = (c < 10) || (c > 20);
	printf("(c < 10) ||(c > 20) : %d\n", res);
	res = !(c >= 30);
	printf("! (c >= 30) : %d\n", res);

	system("pause");
	return 0;
}