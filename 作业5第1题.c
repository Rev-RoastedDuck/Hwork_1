/*
* 
统计输入字符串中空格的个数。
完成函数fun (char*s)，使得其实现统计输入字符串中空格的个数。

*/


#include <stdio.h>
#include <string.h>
int main()
{
	char str[255];
	gets(str);
	printf("%d\n", fun_1(str));
	return 0;
}
int fun_1(char* s){
	int lenth = 0;
	int count = 0;
	lenth = strlen(s);
	for (int i = 0; i < lenth;i++) {
		if (s[i]==' ') {
			count++;
		}
	}//==
	return count;
}
