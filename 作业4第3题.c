/*
3. 输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换，并将原始输入数据和处理后的数据在终端输出。
要求：编写主函数和三个调用函数实现上述功能，其中三个函数分别为
①inputDatas函数，用于输入10个数；
②process函数，用于进行数据对换处理；
③outputDatas函数，用于输出10个数。

*/

#include<stdio.h>
void main(void) {
	void inputDatas(int* p);
	void process(int* p);
	void outputDatas(int* p);
	int num_arr[10];
	int* p;
	p = num_arr;
	inputDatas(p);
	process(p);
	outputDatas(p);
}
void inputDatas(int*p) {
	printf("请输入10个数字(用空格隔开)：");
	for (int i = 0; i < 10;i++) {
		scanf_s("%d",p);
		p++;
	}
}
void process(int*p){
	int min, max;
	int local_min, local_max;
	min = *p;
	max = *p;
	//取最值
	for(int i = 0; i < 10; i++){
		if(*p>max){
			max = *p;
			local_max = i;
		}
		if (*p < min) {
			min = *p;
			local_min = i;
		}
		p++;
	}
	//初始化p值
	p -= 10;//指针运算
	//替换值
	//min
	int temp=0;
	temp = *p;
	*p = min;
	*(p + local_min) = temp;
	//max
	temp = *(p+9);
	*(p+9) = max;
	*(p + local_max) = temp;
}
void outputDatas(int*p) {
	printf("结果为：");
	for (int i = 0; i < 10;i++) {
		printf("%d ",*p);
		p++;
	}
}