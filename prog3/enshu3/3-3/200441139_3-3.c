#include<stdio.h>

int main(void)
{   
	//仕入値、利益率、利益、税金、売値を宣言
	int siireti = 0, riekiritu = 0, rieki = 0, zeikin = 0, urine = 0;

	//仕入値の入力の指示とその入力
	printf("仕入値を入力してください > ");
	scanf("%d", &siireti);

	//利益率の入力の指示とその入力
	printf("利益率[%%]を入力してください > ");
	scanf("%d", &riekiritu);
	
	//各値の計算式
	rieki = (siireti * riekiritu) / 100;
	zeikin = (siireti + rieki) * 10 / 100;
	urine = siireti + rieki + zeikin;

	//売値の表示
	printf("売値は: %d", urine);


	return 0;
}