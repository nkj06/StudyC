#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include "mycalc.h"

#pragma comment(lib, "MyMathLib.lib")

int main(void) {

	int res = int_add(10, 30);
	printf("res = %d\n", res);

	res = int_multi(10, 40);
	printf("res = %d\n", res);

	system("pause");
	return EXIT_SUCCESS;
}