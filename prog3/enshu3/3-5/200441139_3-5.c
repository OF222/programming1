#include<stdio.h>
int main(void)
{
	//入力時用の変数(input)と平均計算用の変数(average)を宣言
	int input = 0;
	int average = 0;

	//入力の指示を表示
	printf("5個の整数を入力してください.");

	printf("\n1個目 > ");  //入力の指示を表示
	scanf("%d", &input);   //入力
	average = average + input;  //入力した整数をaverageに足し合わせる

	//同様に5回目まで繰り返す
	printf("2個目 > ");
	scanf("%d", &input);
	average = average + input;

	printf("3個目 > ");
	scanf("%d", &input);
	average = average + input;

	printf("4個目 > ");
	scanf("%d", &input);
	average = average + input;

	printf("5個目 > ");
	scanf("%d", &input);
	average = average + input;

	//5つの数の合計と平均(浮動小数点数型)を表示
	printf("合計は; %d", average);
	printf("\n平均は; %f", (double)average / 5);

}