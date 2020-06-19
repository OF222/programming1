#include<stdio.h>

int main(void)
{
	double price = 41000, rate = 0.08;
	double tax = price * rate;    //浮動小数点数型で変数を宣言

	printf("%f\n%f\n%f", price, rate, tax);   //各変数を出力

	return 0;
}