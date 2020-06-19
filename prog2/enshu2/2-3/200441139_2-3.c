#include<stdio.h>

int main(void)
{
	double f;
	int g;

	f = 0.1;
	g = f;   //浮動小数点数型の変数を整数型の変数に代入する

	printf("f = %f\ng = %d", f, g);  /*それぞれの関数に対して
　　　　							 適当な書式指定子で出力する*/

	return 0;
}