//2次方程式の係数を入力し、異なる2つの実数解をもつ場合に解を表示して終了する
#include<stdio.h>
#include<math.h>

int delta(int a, int b, int c) {  //与えられた係数に従って判別式の二乗を返す
	int judge;

	judge = b * b - 4 * a * c;
	if (judge < 0) {  //虚数解を持つ場合の表示
		printf("\n虚数解を持つよ！入力し直して。\n");
	}else if (judge == 0) {  //重解を持つ場合の表示
		printf("\n重解を持つよ！入力し直して。\n");
	}

	return judge;
}

int main(void) {
	int a, b, c;
	double x1, x2;
	int squared_delta = 0;

	while (squared_delta <= 0) {  //異なる2解を持つような係数の組を入力するまで繰り返す
		printf("3つの係数を入力して：　");
		scanf("%d %d %d", &a, &b, &c);
		squared_delta = delta(a, b, c);
	}

	//2解の計算
	x1 = (- b + sqrt(squared_delta)) / (2*a);
	x2 = (- b - sqrt(squared_delta)) / (2*a);

	//解を表示する
	printf("%d x^2 + %d x + %d = 0 の2つの実数解は\n", a, b, c);
	printf("x = %f と x = %f", x1, x2);

	return 0;
}