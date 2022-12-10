/*
输入一个长度为 n (9≤ n ≤20) 的一维数组 A ={a0, a1, · · · , an−1}；
数组 B ={b0, b1, · · · , bn−1}是对数组 A经过一次相邻最大化操作得到的，形式化描述为：
编程输入数组A，并在终端输出数组A、B。



*/

#include<stdio.h>
#include<stdlib.h>
void main(void) {
	int num = 0;
	printf("请输入该数组元素的个数：");
	scanf_s("%d",&num);
	
	int* A = (int*)calloc(num, sizeof(int));
	int* B = (int*)calloc(num, sizeof(int));
	

	printf("请输入数字：");
	for (int j = 0; j < num ;j++) {
		scanf_s("%d",&A[j]);
	}
	for (int i = 0; i < num; i++) {
		if (i == 0) {
			B[i] = (A[num - 1] > A[0] ? A[num - 1] : A[0]) > A[1] ? (A[num - 1] > A[0] ? A[num - 1] : A[0]) : A[1];
		}
		if(i>0&&i<num-1){
			B[i] = (A[i - 1] > A[i] ? A[i - 1] : A[i]) > A[i + 1] ? (A[i - 1] > A[i] ? A[i - 1] : A[i]) : A[i + 1];
		}
		if (i == num - 1) {
			B[i] = (A[num - 2] > A[num - 1] ? A[num - 2] : A[num - 1]) > A[0] ? (A[num - 2] > A[num - 1] ? A[num - 2] : A[num - 1]) : A[0];
		}
	}
	printf("数组A为：");
	for (int i = 0; i < num; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("数组B为：");
	for (int i = 0; i < num;i++) {
		printf("%d ",B[i]);
	}

	free(A);
	free(B);
}
