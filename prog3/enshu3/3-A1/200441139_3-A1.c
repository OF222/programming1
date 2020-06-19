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

	//二回目以降の表示は三通りに分けて貯金額を表示する
	if (amount >= 10000 && amount < 100000000) {      //一万円以上、一億円未満の場合、万単位をわけて表示する
		printf("\n現在の貯金高は,%d万%d円です.\n", amount / 10000, amount % 10000);
	}
	else if (amount < 10000) {                       //一万円未満の場合、〇〇〇〇円と表示する
		printf("\n現在の貯金高は,%d円です.\n", (int)amount);
	}
	else {                                           //一億円以上の場合、金額を表示せずに終了する
		printf("\nNo!!!\nその有り余る財力でもっと大きな貯金箱を購入するとよいでしょう.");
		return 0;
	}
	printf("今回はいくら貯金しますか？ (単位：千円) ：");
	scanf("%lf", &zouka);
	amount = amount + zouka * 1000;

	//三回目の表示と貯金
	if (amount >= 10000 && amount < 100000000) {
		printf("\n現在の貯金高は,%d万%d円です.\n", amount / 10000, amount % 10000);
	}
	else if (amount < 10000) {
		printf("\n現在の貯金高は,%d円です.\n", (int)amount);
	}
	else {
		printf("\nNo!!!\nその有り余る財力でもっと大きな貯金箱を購入するとよいでしょう.");
		return 0;
	}
	printf("今回はいくら貯金しますか？ (単位：千円) ：");
	scanf("%lf", &zouka);
	amount = amount + zouka * 1000;

	//最終貯金額を表示
	if (amount >= 10000 && amount < 100000000) {   //一万円以上一億円未満の場合
		printf("\n全部で%d万%d円貯まりました.\n本当によくがんばりました", amount / 10000, amount % 10000);
	}
	else if (amount < 10000) {                     //一万円未満の場合
		printf("\n全部で%d円貯まりました.\nよくがんばりました", (int)amount);
	}
	else {                                         //一億円以上の場合表示しない
		printf("\nええと,いくらですか？多すぎてよくわかりません.\nとにかく,おめでとうございます...");
		return 0;
	}

	return 0;
}