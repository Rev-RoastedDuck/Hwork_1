/*
��дһ����judge����ʵ�δ���һ���ַ�����
ͳ�ƴ��ַ�������ĸ�����֡��ո�������ַ��ĸ�����
��������main�������ַ����Լ��������ͳ�ƽ��
*/
#include<stdio.h>
#include<string.h>
#define NUM 999

void main(void) {
	void judge(char str[], int lenth);
	char str[NUM]="";///0
	int lenth;
	printf("�������ַ�����");
	scanf_s("%[^\n]",str,NUM);//scanf�����ո�Ĭ������
	lenth = strlen(str);
	//����
	//����ַ���
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
	printf("���ַ����У����ֵĸ���Ϊ%d\n��\t��ĸ�ĸ���Ϊ%d\n��\t�ո�ĸ���Ϊ%d\n��\t�����ַ��ĸ���Ϊ%d",NumNumber,NumLetter,NumSpect,NumOther);


}