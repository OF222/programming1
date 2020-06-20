//設定した値と一致する値を入力すると終了するプログラム
#include<stdio.h>
int main(void) {
	int ans = 48;  //正解の数
	int input = 0; //入力する値

	printf("＜＜＜＜数当てゲーム＞＞＞＞");
	printf("\n\n予想値を入れてください："); //入力の指示
	scanf("%d", &input); //入力

	//数が一致するまで入力を繰り返す
	while (ans != input) {
		//入力した数と答えを評価して表示
		if (ans > input) {
			printf("もっと上！");
		}else {
			printf("もっと下！");
		}

		//再度入力の指示
		printf("\n\n予想値を入れてください：");
		scanf("%d", &input);
	}

	printf("\n！！！！大当たりです！！！！");
	return 0;
}