#include <stdio.h>
int main(void)
{
	double l = 0; //正方形の一辺の長さを実数で宣言

    //長さの入力の指示とその入力
	printf("正方形一辺の長さを入力してください > ");
	scanf("%lf", &l);

	//入力された長さに従った、正方形とそれに内接する円の各面積の表示
	printf("正方形の面積は: %f", l * l);
	printf("\n正方形に内接する円の面積は: %f", (l / 2) * (l / 2) * 3.14);
	
	return 0;
}