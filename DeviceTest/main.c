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

	printf("[몫과 나머지를 구하는 연산]\n");
	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 4;
	post = (b++) * 4;

	printf("\n[전위 표기와 후위 표기를 사용한 증감 연산]\n");
	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형 : (++a) * 4 = %d, 후위형 : (b++) * 4 = %d\n", pre, post);

	int c = 30;
	int res;

	printf("\n[논리 연산의 결과값 확인]\n");
	res = (c > 10) && (c < 20);
	printf("(c > 10) && (c < 20) : %d\n", res);
	res = (c < 10) || (c > 20);
	printf("(c < 10) ||(c > 20) : %d\n", res);
	res = !(c >= 30);
	printf("! (c >= 30) : %d\n", res);

	system("pause");
	return 0;
}