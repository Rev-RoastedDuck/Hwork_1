/*
编写一函数judge，由实参传来一个字符串，
统计此字符串中字母、数字、空格和其它字符的个数，
在主函数main中输入字符串以及输出上述统计结果
*/
#include<stdio.h>
#include<string.h>
#define NUM 999

void main(void) {
	void judge(char str[], int lenth);
	char str[NUM]="";///0
	int lenth;
	printf("请输入字符串：");
	scanf_s("%[^\n]",str,NUM);//scanf遇到空格默认跳过
	lenth = strlen(str);
	//传入
	//输出字符串
	judge(str,lenth);
}
void judge(char str[], int lenth) {
	int NumLetter = 0, NumNumber = 0, NumSpect = 0, NumOther = 0;
	for (int i = 0; i < lenth;i++) {
		if((str[i]<='z'&&str[i]>='a')||str[i]<='Z'&& str[i]>='A') {
			NumLetter++;
		}
		else if (str[i] <= '9' && str[i] >= '0') {
			NumNumber++;
		}
		else if (str[i] == ' ') {
			NumSpect++; 
		}//==
		else {
			NumOther++;
		}
	}
	printf("该字符串中，数字的个数为%d\n，\t字母的个数为%d\n，\t空格的个数为%d\n，\t其他字符的个数为%d",NumNumber,NumLetter,NumSpect,NumOther);


}