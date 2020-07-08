#include<stdio.h>
int main(void) {
	int member[4] = { 0,0,0,0 };  //貯金額用の配列の宣言
	int add = 0;  //追加額用の関数の宣言
	int i = 0;  //貯金先の指定、または貯金終了のための変数
	int sum = 0;  //合計額用の変数
	
	//貯金先の指定の要求と、その入力
	printf("だれ？（父さん：1、母さん：2、太郎：3、花子：4、入力終：-1）：");
	scanf("%d", &i);

	while (i != -1) {
		printf("いくら？");  //追加額の指定の要求
		scanf("%d", &add);   //追加額の入力 
		member[i - 1] = member[i - 1] + add;  //追加額を貯金額に足し合わせる
		//i==-1まで繰り返す
		printf("\nだれ？（父さん：1、母さん：2、太郎：3、花子：4、入力終：-1）：");
		scanf("%d", &i);
		}
	
	//各人の貯金額の表示
	printf("\n現在の貯金額");
	printf("\n父さん：%d円\n母さん：%d円\n太郎：%d円\n花子：%d円\n", member[0], member[1], member[2], member[3]);
	
	//4人の貯金額の合計の計算
	for (i = 0; i < 4; i++) {
		sum = sum + member[i];
	}
	printf("\n合計：%d円", sum);  //合計の表示

	return 0;
}

