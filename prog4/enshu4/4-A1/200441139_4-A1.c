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
		/*答えよりも大きい数を入力した際に答えとの差が
		5未満、5以上10未満、10以上の場合に分けて表示*/
		if (ans < input && input < ans + 5) {
			printf("おしい！もうちょっと下！");
		}
		if (input < ans + 10 && input >= ans + 5) {
			printf("もうちょっと下！");
		}
		if (input >= ans + 10) {
			printf("もっと下！");
		}

		/*答えよりも小さい数を入力した際に答えとの差が
		5未満、5以上10未満、10以上の場合に分けて表示*/
		if (ans > input && input + 5 > ans) {
			printf("おしい！もうちょっと上！");
		}
		if (input + 5 <= ans && input + 10 > ans) {
			printf("もうちょっと上！");
		}
		if (input + 10 <= ans) {
			printf("もっと上！");
		}

		//再度入力の指示
		printf("\n\n予想値を入れてください：");
		scanf("%d", &input);
	}

	printf("\n！！！！大当たりです！！！！");
	return 0;
}