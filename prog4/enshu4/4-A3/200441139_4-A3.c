//3の倍数、5の倍数、3の倍数かつ5の倍数をそれぞれ判定するプログラム
#include<stdio.h>
int main(void) {
	printf("＜　Fizz Buzz問題　＞\n");
	printf("＜3の倍数と5の倍数を判定＞\n");

	int i;  //ループカウンタの宣言
	//1～30までの数を判定する
	for (i = 1; i <= 30; i++) {
		printf("%d:", i);
		if ((i % 3 == 0) && (i % 5 == 0)) {  //3かつ5の倍数
			printf("Fizz Buzz\n");
		}
		if ((i % 3 == 0) && !(i % 5 == 0)) {  //3の倍数
			printf("Fizz\n");
		}
		if (!(i % 3 == 0) && (i % 5 == 0)) {  //5の倍数
			printf("Buzz\n");
		}
		if (!(i % 3 == 0) && !(i % 5 == 0)) {  //どちらの倍数でもない
			printf("%d\n", i);
		}

	}
	return 0;
}