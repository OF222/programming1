/*int double 両方を含む演算*/
#include<stdio.h>

int main(void)
{
	double seisuu = 3;
	int jissuu = 2;

	double kekka = seisuu / jissuu;

	printf("%lf", kekka);

	return 0;    //精度の高いdouble型が優先される
}