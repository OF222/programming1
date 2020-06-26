#include<stdio.h>
int main(void) {
	int num[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("Date No. %d: ", i + 1);
		scanf("%d", &num[i]);
	}
	printf("\n逆から並べ替えると！\n\n");
	for (i = 4; i >= 0; i--) {
		printf("Date No. %d: %d\n", i + 1, num[i]);
	}
	;
	return 0;
}