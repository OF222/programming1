//三回貯金をするプログラム
#include<stdio.h>
//貯金額を表示する関数
void display(int amount) {
	printf("現在の貯金高は,%d万%d円です.", amount / 10000, amount % 10000);
}
//貯金額を表示し(上の関数を用いる)、貯金額の入力を行う関数
int savings(int amount, double inc) {
	display(amount);
	printf("\n今回はいくら貯金しますか？（単位：千円）：");
	scanf("%lf", &inc);
	printf("\n");
	amount = amount + (inc*1000);

	return amount;
}

int main(void) {
	int i;
	int inc = 0;
	int amount = 0;

	for (i = 0;i < 3;i++) {  //3回繰り返す
		amount = savings(amount, inc);
	}
	//最後に再度貯金額を表示する
	display(amount);
	printf("\nよく頑張りました.");

	return 0;
}