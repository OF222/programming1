//1～10の数を降順に入れ替えるプログラム
#include<stdio.h>
int main(void) {

	int i, j;  //ループカウンタの宣言
	int date[10] = { 5,3,10,7,9,1,2,8,6,4 };  //1～10の数の宣言
	int media[10] = { 0 };  //並べ替えた数を代入するための配列の宣言

	printf("降順に並べ替えるプログラム\n\n");

	for (j = 0; j < 10; j++) {
		//media を date の中の最大の数に変更する
		for (i = 0; i < 10; i++) {
			if (media[j] - date[i] < 0) {

				media[j] = date[i];
			}
		}
		//現在の date の中の最大の数を削除(0に変更)して、次のループで最も大きい数にならないようにする
		for (i = 0; i < 10; i++) {
			if (date[i] == media[j]) {
				date[i] = 0;
			}
		}
	}
	//降順になった media を date へ代入する
	for (i = 0; i < 10; i++) {
		date[i] = media[i];
	}
	//dateの表示
	for (i = 0; i < 10; i++) {
		printf("date[%d} = %d\n", i, date[i]);
	}
	return 0;
}
