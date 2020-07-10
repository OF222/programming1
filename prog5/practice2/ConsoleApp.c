#include<stdio.h>
int main(void) {
	char member[][7] = { "母さん","父さん","太郎","花子" };
	int i = 0; 
	int j = 0;
	scanf("%d", &i);
	while (member[i][j] !='\0')
	{
		printf("%c", member[i][j]);
		j++;
	}
	return 0;
	}
