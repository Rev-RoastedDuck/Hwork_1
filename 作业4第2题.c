/*
编写一函数order，使输入的一个字符串按反序存放，在主函数main中输入并输出反序后的字符串（不包含空格）。
例如，输入“123456abcdef ”，调用order函数后将输出“fedcba654321”。

*/
#include<stdio.h>
#include<string.h>
#define NUM 999
void main(void) {
	void order(char* p1, char* p2,int lenth);
	char str[NUM] = "\0";//因为要使用strlen函数，所以要提前赋值
	char* p1,*p2;
	int lenth;

	printf("请输入字符串：");
	scanf_s("%s", str, NUM);

	p1 = str;
	lenth = strlen(str);
	p2 = str+lenth-1;//将指针移到末尾

	order(p1,p2,lenth);
	printf("反转后的字符串为%s",str);
}
void order(char*p1,char*p2,int lenth) {
	char temp;
	for(int i = 0; i < lenth/2 ; i++) {
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
}