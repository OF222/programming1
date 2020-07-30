#include<stdio.h>

int main(void) {
	FILE* fp;  //ファイルポインタ
	char buff[256];  //読み込んだ行を格納する変数
	int i;

	fp = fopen("textfile.txt", "r");  //ファイルを開く
	if (fp != NULL) {  //正常に開けた場合
		for (i = 0;(i < 128) && (fgets(buff, 256, fp) != NULL); i++) {  //正常に一行分読み込めた場合
			if (fgets(buff, 256, fp) != NULL) {  //もう一行分読み込み、正常だった場合
				printf("%s\n", buff);  //一行表示する
			}
			else {  //正常に読み込めなかった、またはファイルの終端の場合
				break;
			}
		}
		fclose(fp);  //ファイルを閉じる
	}else {  //ファイルを正常に開けなかった場合
		printf("ファイルを開けませんでした。");
	}
	return 0;
}