//一定の計算を行い、表示するプログラム
#include<stdio.h>
int main(void)
{
	//整数型の変数を宣言
	int suti = 0;

	printf("数(整数)を入力してください：");  //整数の入力の指示
	scanf("%d", &suti);  //入力

	//入力した数に従った各数値の表示
	printf("%d：%d\n", suti, suti + 5);
	printf("%d：%d\n", suti + 1, suti + 4);
	printf("%d：%d\n", suti + 2, suti + 3);
	printf("%d：%d\n", suti + 3, suti + 2);
	printf("%d：%d\n", suti + 4, suti + 1);

	return 0;

}