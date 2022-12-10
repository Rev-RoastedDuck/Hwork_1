/*
编写程序，输入一个二维数组A（维度4×4），并对A行列互换得到转置后的二维数组B。
要求输出数组A和数组B
*/
#include<stdio.h>
void main(void) {
	int A[4][4];
	int B[4][4];
	//输入并输出A
	printf("请输入二维数组的元素:");
	for (int line = 0; line < 4;line++) {
		for (int row = 0; row < 4;row++) {
			scanf_s("%d",&A[line][row]);
			printf("%3d", A[line][row]);
		}
		printf("\n");
	}
	printf("\n");
	//转置输出
	printf("转置后的B二维数组为：\n");
	for (int row = 0; row < 4; row++) {
		for (int line = 0; line < 4; line++) {
			printf("%3d",A[line][row]);
			B[row][line] = A[line][row];
		}
		printf("\n");
	}

}