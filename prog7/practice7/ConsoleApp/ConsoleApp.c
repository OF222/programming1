//ポインタについて練習する
#include<stdio.h>

int calcualte_sum(int vari[4]) {
	int sum = 0;
	int i;

	for (i = 0; i < 4;i++) {
		sum = sum + vari[i];
	}
	return sum;
}
int main(void) {
	int vari[4];
	int *pt;
	int i;
	int sum;

	pt = vari;
	for (i = 0; i < 4; i++) {
		*(pt + i) = 2;
		printf("%d", vari[i]);
	}
	sum = calcualte_sum(vari);

	printf("%d", sum);

	return 0;
}
