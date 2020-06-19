#include <stdio.h>
int main(void)
{
	int y, m;

	//出生年についての指示の表示と入力
	printf("input born year:");
	scanf("%d", &y);

	//出生月についての指示の表示と入力
	printf("input born month:");
	scanf("%d", &m);

	//改行して、入力した出生年月を表示
	printf("\nI was born in %d / %d.", y, m);

	return 0;
}
