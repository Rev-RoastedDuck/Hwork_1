/*
�����������֣�Ҫ�����Զ��庯��swap������������ֵĽ����������������������֡�
Ҫ���Զ��庯��Ϊ int swap(int *a,int *b)��

*/

#include<stdio.h>
void main(void) {
	int swap(int*a, int*b);
	int a=0, b=0;
	printf("������a��b��ֵ��");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int* p_a, *p_b;
	p_a = &a;//&
	p_b = &b;
	swap(p_a,p_b);
	printf("%d %d",a,b);

}
int swap(int*a, int*b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return 0;
	//printf("%d %d", a, b);��Ȼ���ֵ�ǶԵģ���ʵ�ʵĲ�û�иı�
}