#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("[�� ��ȯ �����ڰ� �ʿ��� ���]\n");
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf�� ��� : %d\n", res, a);

	int c = 10;
	double d = 3.14;

	printf("\n[sizeof �������� ��� ��]\n");
	printf("int�� ������ ũ�� : %d\n", sizeof(c));
	printf("double�� ������ ũ�� : %d\n", sizeof(d));
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("������ ������� ũ�� : %d\n", sizeof(1.5 + 3.4));
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));

	system("pause");
	return 0;
} 