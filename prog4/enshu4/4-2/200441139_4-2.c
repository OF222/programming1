//1～15の整数を2進数に変換、表示するプログラム
#include <stdio.h>
int main(void)
{
	int suti = 0;  //10進数用の整数変数を宣言
	
	//入力の指示とその入力
	printf("＜＜　10進数から2進数へ変換　＞＞\n\n0～15までの整数を入力してください：");
	scanf("%d", &suti);

	if (suti >= 0 && suti <= 15)  //1～15の範囲で整数が入力された場合、2進数に変換して表示
	{
		printf("\n2進数表記で%dは", suti);
		printf("\n%d%d%d%d", (((suti / 2) / 2) / 2) % 2, ((suti / 2) / 2) % 2, (suti / 2) % 2, suti % 2);
	}
	else //1～15の範囲でない場合は終了する
	{
		printf("\n%dは1～15の範囲ではありません", suti);
	}
	return 0;
}