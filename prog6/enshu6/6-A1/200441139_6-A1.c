//三回貯金をするプログラム
#include<stdio.h>
//貯金額を表示する関数
void display(int amount) {
	printf("現在の貯金高は,%d万%d円です.", amount / 10000, amount % 10000);
}
//貯金額を表示し(上の関数を用いる)、貯金額の入力を行う関数
int savings(int amount, double change) {
	display(amount);
	printf("\n今回はいくら貯金しますか？（単位：千円）：");
	scanf("%lf", &change);
	printf("\n");
	amount = amount + (change * 1000);

	return amount;
}
//同様に貯金額を表示し、引き出し額の入力を行う関数
int withdraw(int amount, double change) {
	display(amount);
	printf("\n今回はいくら引き出しますか？（単位：千円）：");
	scanf("%lf", &change);
	printf("\n");
	amount = amount - (change * 1000);

	return amount;
}

int main(void) {
	int change = 0;
	int amount = 0;
	int select = 0;

	while (select != 99) {  //select == 99 まで入金または引き出しを続ける
		printf("処理を選択してください(入金:1, 引き出し:2, プログラム終了:99)");
		scanf("%d", &select);
		switch (select) {
			case 1:  //入金の操作
				amount = savings(amount, change);
				break;
			case 2:  //引き出しの操作
				amount = withdraw(amount, change);
				break;
			case 99:  //終了する
				break;
		}
	}

	return 0;
}