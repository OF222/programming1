#include<stdio.h>
int main(void)
{
	//全体の貯金額用の変数(ammount)と増加額用の変数(zouka)を宣言
	int amount = 0;
	double zouka = 0;

	printf("現在の貯金高は,%d円です.\n",amount );	   //貯金額を整数型で表示
	printf("今回はいくら貯金しますか？ (単位：千円) ：");  //質問の表示
	scanf("%lf", &zouka);                                  //増加額の入力
    amount = amount + zouka * 1000;                        //貯金額に増加額を足し合わせる
	
	//上記四行を二回繰り返す
	printf("\n現在の貯金高は,%d円です.\n", amount);
	printf("今回はいくら貯金しますか？ (単位：千円) ：");
	scanf("%lf", &zouka);
	amount = amount + zouka * 1000;

	printf("\n現在の貯金高は,%d円です.\n", amount);
	printf("今回はいくら貯金しますか？ (単位：千円) ：");
	scanf("%lf", &zouka);
	amount = amount + zouka * 1000;

	//最終貯金額を表示
	printf("\n全部で%d円貯まりました.\nよくがんばりました.", amount);

	return 0;
}