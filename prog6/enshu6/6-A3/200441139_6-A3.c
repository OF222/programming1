//2つの長方形が重なっているかを表示するプログラム
#include<stdio.h>

void heck_overlap(first_x1, first_y1, first_x2, first_y2, last_x1, last_y1, last_x2, last_y2) {

	if ((first_x1 < last_x1) && (first_x1 < last_x2) && (first_x2 < last_x1) && (first_x2 < last_x2)) {  //1つ目の長方形を基準としたx軸の調査
		printf("重なってないよ");
	} else if ((first_y1 < last_y1) && (first_y1 < last_y2) && (first_y2 < last_y1) && (first_y2 < last_y2)) {  //2つ目の長方形を基準としたx軸の調査
		printf("重なってないよ");
	} else if ((last_x1 < first_x1) && (last_x1 < first_x2) && (last_x2 < first_x1) && (last_x2 < first_x2)) {  //1つ目の長方形を基準としたy軸の調査
		printf("重なってないよ");
	} else if ((last_y1 < first_y1) && (last_y1 < first_y2) && (last_y2 < first_y1) && (last_y2 < first_y2)) {  //2つ目の長方形を基準としたy軸の調査
		printf("重なってないよ");
	} else {  //どれも満たさなかった時の表示
		printf("重なってるぞ");
	}
}

int main(void) {
	int first_x1, first_y1, first_x2, first_y2;  //1つ目の長方形の座標の宣言
	int last_x1, last_y1, last_x2, last_y2;  //2つ目の長方形の座標の宣言

	//各長方形の座標の入力
	scanf("%d %d %d %d", &first_x1, &first_y1, &first_x2, &first_y2);
	scanf("%d %d %d %d", &last_x1, &last_y1, &last_x2, &last_y2);

	check_overlap(first_x1, first_y1, first_x2, first_y2, last_x1, last_y1, last_x2, last_y2);
	return 0;
}