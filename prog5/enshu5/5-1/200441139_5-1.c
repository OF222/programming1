//整数型配列を用いて5つの整数を表示するプログラム
#include<stdio.h>
int main(void) {
	int num[5];  //配列の宣言
	int i;  //ループカウンタの宣言

	//要素を0～4まで順に入力
	for (i = 0; i < 5; i++) {
		printf("Date No. %d: ", i + 1);
		scanf("%d", &num[i]);
	}

	//要素を4～0の順に表示
	printf("\n逆から並べ替えると！\n\n");
	for (i = 4; i >= 0; i--) {
		printf("Date No. %d: %d\n", i + 1, num[i]);
	}
	;
	return 0;
}