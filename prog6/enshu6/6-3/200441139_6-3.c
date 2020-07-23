//極座標(r,θ)に対応する直交座標(x, y)を表示するプログラム
#include<stdio.h>
#include<math.h>
//xを計算する関数
double hori(int r, int theta) {
	double x;
	double pi = 3.141592653;
	
	x = r * cos(pi * theta / 180);
	return x;
}
//yを計算する関数
double vert(int r, int theta) {
	double y;
	double pi = 3.141592653;

	y = r * sin(pi * theta / 180);
	return y;
}
int main(void) {
	int deg;  //角度[°]
	int r = 2;  //半径2で宣言

	//θ,x,yの対応関係を表示
	for (deg = 0;deg <= 90;deg = deg + 5) {
		printf("θ = %d deg : x = %f, y = %f\n", deg, hori(r, deg), vert(r, deg));
	}
	return 0;
}