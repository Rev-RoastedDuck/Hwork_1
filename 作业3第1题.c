/*
��д��������һ����ά����A��ά��4��4��������A���л����õ�ת�ú�Ķ�ά����B��
Ҫ���������A������B
*/
#include<stdio.h>
void main(void) {
	int A[4][4];
	int B[4][4];
	//���벢���A
	printf("�������ά�����Ԫ��:");
	for (int line = 0; line < 4;line++) {
		for (int row = 0; row < 4;row++) {
			scanf_s("%d",&A[line][row]);
			printf("%3d", A[line][row]);
		}
		printf("\n");
	}
	printf("\n");
	//ת�����
	printf("ת�ú��B��ά����Ϊ��\n");
	for (int row = 0; row < 4; row++) {
		for (int line = 0; line < 4; line++) {
			printf("%3d",A[line][row]);
			B[row][line] = A[line][row];
		}
		printf("\n");
	}

}