#include<stdio.h>

int main(void) {
	int a[4], b[4];
	int i;
	int judge = 0;

	for (i = 0;i < 4;i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0;i < 4;i++) {
		scanf("%d", &b[i]);
	}
	//a基準の判定
	if ((a[0] < b[0])&&(a[0] < b[2])&&(a[2] < b[0])&&(a[2] < b[2])) {
		judge = 1;
	}
	if ((a[1] < b[1])&&(a[1] < b[3])&&(a[3] < b[1])&&(a[3] < b[3])) {
		judge = 1;
	}
	//b基準の判定
	if ((b[0] < a[0])&&(b[0] < a[2])&&(b[2] < a[0])&&(b[2] < a[2])) {
		judge = 1;
	}
	if ((b[1] < a[1])&&(b[1] < a[3])&&(b[3] < a[1])&&(b[3] < a[3])) {
		judge = 1;
	}
	if (judge == 1) {
		printf("重なってないよ");
	}else {
		printf("重なってるぞ");
	}
	return 0;
}