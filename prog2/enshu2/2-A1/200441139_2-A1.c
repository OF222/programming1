/*
整数型同士、浮動小数点数型同士の四則演算結果を表示するプログラム
*/
#include<stdio.h>

int main(void)
{
	int a = 3, b = 2;
	double x = 13, y = 4;

	printf("a = %d, b = %d, x = %f, y = %f\n\na + b = %d\na - b = %d\na * b = %d\na / b = %d\n\nx + y = %f\nx - y = %f\nx * y = %f\nx / y = %f", a, b, x, y, a + b, a - b, a * b, a / b, x + y , x - y, x * y, x / y);
	//各演算結果を出力
	return 0;
}