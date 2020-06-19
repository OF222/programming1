#include <stdio.h>

int main()
{
	double zeiritu;
	int zeinuki;
	int zeikomi;

	zeiritu = 0.10;
	zeinuki = 120;
	zeikomi = zeinuki * (1 + zeiritu);

	printf("税抜き%d円の消費税%f%%の税込み金額は%d円です. \n",
		zeinuki, zeiritu * 100.0, zeikomi);

	return 0;
}