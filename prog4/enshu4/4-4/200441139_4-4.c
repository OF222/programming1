#include<stdio.h>
int main(void) {
	int hen = 0, n, m; //一辺の長さ、ループカウンタn、mの宣言
	printf("一辺の長さを入力してください（1から10まで）："); //辺の長さの入力の指示
	scanf("%d", &hen); //辺の入力

	//三角形の表示
	for (n = 1; n <= hen; n++) {
		printf("\n"); //一行分表示し終えたら改行
		//行数(n)の数だけ「*」を入力
		for (m = 1; m <= n; m++) {
			printf("*");
		}
	}

	return 0;
}

