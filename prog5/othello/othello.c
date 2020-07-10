#include<stdio.h>
int main(void) {
	int bord[8][8] = { 0 };
	int i, j;
	int s, t;  //盤面変更時に使用する変数
	char ans;
	bord[3][4] = bord[4][3] = 1;
	bord[3][3] = bord[4][4] = 2;
	int row, col;  //行、列に対応させる変数の宣言
	int judge = 0;  //置ける置けないの判定機

	printf("どこおく？");
	scanf("%d %d", &row, &col);

	//行上方向の調査
	i = 1;
	while (bord[row + i][col] == 2) {
		i++;
	}
	if (bord[row + i][col] == 1) {
		judge = 1;
	}
	//行下方向の調査
	i = 1;
	while (bord[row - i][col] == 2) {
		i++;
	}
	if (bord[row + i][col] == 1) {
		judge = 1;
	}
	//列右方向の調査
	j = 1;
	while (bord[row][col + j] == 2) {
		i++;
	}
	if (bord[row][col + j] == 1) {
		judge = 1;
	}
	//列左方向の調査
	j = i;
	while (bord[row][col - j] == 2) {
		i++;
	}
	if (bord[row][col - j] == 1) {
		judge = 1;
	}
	//右上の調査
	i = 1, j = 1;
	while (bord[row + i][col + j] == 2) {
		i++;
		j++;
	}
	if (bord[row + i][col + j] == 1) {
		judge = 1;
	}
	//左上の調査
	i = 1, j = 1;
	while (bord[row + i][col - j] == 2) {
		i++;
		j++;
	}
	if (bord[row + i][col - j] == 1) {
		judge = 1;
	}
	//右下の調査
	i = 1, j = 1;
	while (bord[row - i][col + j] == 2) {
		i++;
		j++;
	}
	if (bord[row + i][col - j] == 1) {
		judge = 1;
	}
	//右下の調査
	i = 1, j = 1;
	while (bord[row - i][col - j] == 2) {
		i++;
		j++;
	}
	if (bord[row + i][col - j] == 1) {
		judge = 1;
	}

	if (judge == 1) {
		printf("置けるよ！\n");
		printf("ここに置く？ -y/n：\n");
		scanf("%c", &ans);
		if (ans == 'y') {

		}


	}
	else {
		printf("そこは置けないよ！");
	}
	return 0;
}