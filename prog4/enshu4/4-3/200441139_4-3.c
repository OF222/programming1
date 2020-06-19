#include<stdio.h>
int main(void) {
	int ans = 48;
	int input = 0;

	printf("＜＜＜＜数当てゲーム＞＞＞＞");
	printf("\n\n予想値を入れてください：");
	scanf("%d", &input);

	while (ans != input) {
		if (ans > input) {
			printf("もっと上！");
		} else {
			printf("もっと下！");
		}

		printf("\n\n予想値を入れてください：");
		scanf("%d", &input);
	}

	printf("\n！！！！大当たりです！！！！");
	return 0;
}

