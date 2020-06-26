//配列の要素を初期化しなし場合0が代入されるのかの確認
#include<stdio.h>
int main(void) {
	int a[5] = {1};
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
	return 0;
}
//1つも要素を初期化しないとすべてでたらめな数が設定される