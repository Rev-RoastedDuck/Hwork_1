/*
3. ����10����������������С�������һ�����Ի����������������һ�����Ի�������ԭʼ�������ݺʹ������������ն������
Ҫ�󣺱�д���������������ú���ʵ���������ܣ��������������ֱ�Ϊ
��inputDatas��������������10������
��process���������ڽ������ݶԻ�����
��outputDatas�������������10������

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
	printf("������10������(�ÿո����)��");
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
	//ȡ��ֵ
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
	//��ʼ��pֵ
	p -= 10;//ָ������
	//�滻ֵ
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
	printf("���Ϊ��");
	for (int i = 0; i < 10;i++) {
		printf("%d ",*p);
		p++;
	}
}