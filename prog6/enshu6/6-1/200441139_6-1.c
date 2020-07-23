//年間の月別気温、平均、最高、最低気温を摂氏および華氏で表示するプログラム
#include<stdio.h>
//1～12月の摂氏気温を華氏へ変換する関数の定義(切り捨てが最後に行われるように計算する)
int convert_Fahrenheit(int celsius) {
	int fah;
	fah = (9 * celsius + 32 * 5) / 5;
	return fah;
}
//平均摂氏気温を華氏へ変換する関数(切り捨てが最後に行われるように計算)
int convert_FahrenheitAve(int sum) {
	int fah_ave;
	fah_ave = (9 * sum + 32 * 5 * 12) / (5 * 12);
	return fah_ave;
}

int main(void) {
	int month[12] = { 5,0,3,10,16,21,24,25,19,13,7,0 };  //月別気温の宣言
	int i;  //ループカウンタの宣言
	int sum = 0;  //平均気温用の変数

	//月別気温の表示
	for (i = 0; i < 12; i++) {
		printf("%d月：%d(%d)\n", i + 1, month[i], convert_Fahrenheit(month[i]));
	}
	printf("-----------\n");

	//12カ月分の気温の合計を出し、平均気温を表示
	for (i = 0; i < 12; i++) {
		sum = sum + month[i];
	}
	printf("平均：%d(%d)\n", sum / 12, convert_FahrenheitAve(sum));

	int max = sum / 12, min = sum / 12;  //最高気温、最低気温用の変数の宣言(初期値は平均気温)
	//12カ月分の気温を比較し、最高、最低気温を定める
	for (i = 0; i < 12; i++) {
		if (max < month[i]) {
			max = month[i];
		}
		if (min > month[i]) {
			min = month[i];
		}
	}
	//最高、最低気温の表示
	printf("最高：%d(%d)\n", max, convert_Fahrenheit(max));
	printf("最低：%d(%d)\n", min, convert_Fahrenheit(min));

	//終了の表示
	printf("\n以上\n20xx年の月平均気温(摂氏,括弧内は華氏)");
	return 0;
}