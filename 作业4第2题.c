/*
��дһ����order��ʹ�����һ���ַ����������ţ���������main�����벢����������ַ������������ո񣩡�
���磬���롰123456abcdef ��������order�����������fedcba654321����

*/
#include<stdio.h>
#include<string.h>
#define NUM 999
void main(void) {
	void order(char* p1, char* p2,int lenth);
	char str[NUM] = "\0";//��ΪҪʹ��strlen����������Ҫ��ǰ��ֵ
	char* p1,*p2;
	int lenth;

	printf("�������ַ�����");
	scanf_s("%s", str, NUM);

	p1 = str;
	lenth = strlen(str);
	p2 = str+lenth-1;//��ָ���Ƶ�ĩβ

	order(p1,p2,lenth);
	printf("��ת����ַ���Ϊ%s",str);
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