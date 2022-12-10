#include<stdio.h>
void main(void) {
	int num = 0;
	int temp;
	int num_init_left = 1;
	int num_init_right;
	printf("请输入一个数字：");
	scanf_s("%d",&num);
	temp = num - 1;
	//前num行
	for (int line = 1; line <= num;line++) {
		num_init_right = line - 1;
		for (int i = temp; i >= 0; i--) {
			printf(" ");
		}
		for (int row = 1; row <= line * 2 - 1;row++){
			if(row<=line){
				printf("%d", num_init_left);
				num_init_left++;
			}
			else {
				printf("%d", num_init_right);
				num_init_right--;
			}
		}
		temp--;
		num_init_left = 1;
		printf("\n");
	}
	//后num-1行
	temp = num - 1;
	for (int line = num - 1; line >= 0;line--) {
		num_init_right = line - 1;
		for (int i = 0;i<=num-temp;i++) {
			printf(" ");
		}
		for (int row = 1; row <= line * 2 - 1;row++) {
			if (row <= line) {
				printf("%d",num_init_left);
				num_init_left++;
			}
			else {
				printf("%d",num_init_right);
				num_init_right--;
			}
		}
		temp--;
		num_init_left = 1;
		printf("\n");
	}

}