/*
* 
ͳ�������ַ����пո�ĸ�����
��ɺ���fun (char*s)��ʹ����ʵ��ͳ�������ַ����пո�ĸ�����

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
