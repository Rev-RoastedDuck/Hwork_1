/*
编写程序，输入一个正整数n (3≤ n ≤6)，再输入一个n 行n列的矩阵，找出该矩阵中绝对值最大的元素以及它的行下标和列下标
*/
#include<stdio.h>
#include<math.h>

void main(void) {
	int A[6][6];
	int size = 0;
	printf("请输入矩阵大小:");
	scanf_s("%d",&size);
	//输入
	printf("请输入矩阵的元素:");
	for (int line = 0; line < size; line++) {
		for (int row = 0; row < size; row++) {
			scanf_s("%d", &A[line][row]);
		}
	}
	//比较
	int max = 0,max_x=0,max_y=0;
	for (int line = 0; line < size;line++) {
		for (int row = 0; row < size;row++) {
			if(abs(A[line][row])>max) {
				max = abs(A[line][row]);
				max_x = line;
				max_y = row;
			}
		}
	}
	printf("该矩阵绝对值最大的元素为%d，行下标为%d，列下标为%d", A[max_x][max_y], max_x+1, max_y+1);
}