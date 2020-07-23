#include<stdio.h>

void is_overlap(int rectang1, int rectang2) {
	
}
int main(void) {
	int rectangle1[4];
	int rectangle2[4];
	int i;

	printf("一つ目の長方形の座標を入力します。");
	for (i = 0; i < 4; i++) {
		scanf("%d", rectangle1[i]);
	}
	printf("二つ目の長方形の座標を入力します。");
	for (i = 0; i < 4; i++) {
		scanf("%d", rectangle2[i]);
	}
	is_overlap(rectangle1, rectangle2);

	return 0;
}