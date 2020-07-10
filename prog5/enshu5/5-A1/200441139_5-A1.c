//オセロの盤面の配置可能な場所を判断するプログラム
#include<stdio.h>
int main(void) {
	int bord[8][8] = { 0 };
	int i, j;  //行、列を変化させるための変数
	bord[3][4] = bord[4][3] = 1;  //始めの盤面の配置
	bord[3][3] = bord[4][4] = 2;
	int row, col;  //行、列に対応させる変数の宣言
	int judge = 0;  //置ける置けないの判定機
	
	//配置可能か盤面を入力するまで繰り返す
	while (judge != 1) {
		printf("どこに置く？");
		scanf("%d %d", &row, &col);  //置く場所の入力

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

		if (judge == 0) {
			printf("NG\n");
		}
	}
	printf("OK");
	return 0;
}
