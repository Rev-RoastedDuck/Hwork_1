/*
��д��������һ��������n (3�� n ��6)��������һ��n ��n�еľ����ҳ��þ����о���ֵ����Ԫ���Լ��������±�����±�
*/
#include<stdio.h>
#include<math.h>

void main(void) {
	int A[6][6];
	int size = 0;
	printf("����������С:");
	scanf_s("%d",&size);
	//����
	printf("����������Ԫ��:");
	for (int line = 0; line < size; line++) {
		for (int row = 0; row < size; row++) {
			scanf_s("%d", &A[line][row]);
		}
	}
	//�Ƚ�
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
	printf("�þ������ֵ����Ԫ��Ϊ%d�����±�Ϊ%d�����±�Ϊ%d", A[max_x][max_y], max_x+1, max_y+1);
}