#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("[형 변환 연산자가 필요한 경우]\n");
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d\n", res, a);

	int c = 10;
	double d = 3.14;

	printf("\n[sizeof 연산자의 사용 예]\n");
	printf("int형 변수의 크기 : %d\n", sizeof(c));
	printf("double형 변수의 크기 : %d\n", sizeof(d));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결과값의 크기 : %d\n", sizeof(1.5 + 3.4));
	printf("char 자료형의 크기 : %d\n", sizeof(char));

	system("pause");
	return 0;
} 