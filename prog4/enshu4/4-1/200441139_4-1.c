//貯金額の桁に応じて表示をおこなうプログラム
#include<stdio.h>
int main(void)
{
	//全体の貯金額用の変数(ammount)と増加額用の変数(zouka)を宣言
	int amount = 0;
	double zouka = 0;


	printf("現在の貯金高は,%d円です.\n", amount);	       //貯金額を表示
	printf("今回はいくら貯金しますか？ (単位：千円) ：");  //質問の表示
	scanf("%lf", &zouka);                                  //増加額の入力
	amount = amount + zouka * 1000;                        //貯金額に増加額を足し合わせる

	//二回目の表示と貯金
	if (amount >= 10000) //一万円を超える場合の表示 
	{
		printf("\n現在の貯金高は,%d万%d円です.\n", amount / 10000, amount % 10000);
	}
	else //一万円未満の表示
	{
		printf("\n現在の貯金高は,%d円です.\n", amount);
	}
	printf("今回はいくら貯金しますか？ (単位：千円) ：");
	scanf("%lf", &zouka);
	amount = amount + zouka * 1000;

	//三回目
	if (amount >= 10000)
	{
		printf("\n現在の貯金高は,%d万%d円です.\n", amount / 10000, amount % 10000);
	}
	else
	{
		printf("\n現在の貯金高は,%d円です.\n", amount);
	}
	printf("今回はいくら貯金しますか？ (単位：千円) ：");
	scanf("%lf", &zouka);
	amount = amount + zouka * 1000;

	//最終貯金額を表示
	if (amount >= 100000) //十万円以上の表示
	{
		printf("\n全部で%d万%d円貯まりました.\nよくがんばりました！！", amount / 10000, amount % 10000);
	}
	else //五万円以上、十万円未満の表示
	{
		if (amount < 100000 && amount >= 50000)
		{
			printf("\n全部で%d万%d円貯まりました.\nがんばりました！", amount / 10000, amount % 10000);
		}
		else //五万円未満の表示
		{
			if (amount >= 10000 && amount < 50000)
			{
				printf("\n全部で%d万%d円貯まりました.\nもっと！がんばりましょう.", amount / 10000, amount % 10000);
			}
			else
			{
				printf("\n全部で%d円貯まりました.\nもっと！がんばりましょう.", amount);
			}
		}
	}
	return 0;
}