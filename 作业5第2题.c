/*
输入两个数字，要求在自定义函数swap中完成两个数字的交换，输出交换后的两个数字。
要求自定义函数为 int swap(int *a,int *b)。

*/

#include<stdio.h>
void main(void) {
	int swap(int*a, int*b);
	int a=0, b=0;
	printf("请输入a和b的值：");
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
	//printf("%d %d", a, b);虽然输出值是对的，但实际的并没有改变
}