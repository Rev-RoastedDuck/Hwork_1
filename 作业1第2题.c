#include <stdio.h>
/*
输入若干个整数，统计这些数中偶数的个数，输出这些偶数中的最小值并求偶数的平均值
*/
void main(void) {
	int num, num_min, count_ou,sum;
	double averge;
	num = 0;
	num_min = 99999;
	count_ou = 0;
	sum = 0;
	averge = 0;

	char c = '0';
	printf("请输入数字：");
	while (1) {
		scanf_s("%d", &num);
		if (num % 2 == 0) {
			count_ou += 1;
			if (num_min > num) {
				num_min = num;
			}
			sum += num;
		}
		c = getchar();
		if (c == '\n') {
			break;
		}
	}
	averge = sum / count_ou;
	printf("偶数个数为%d\n最小值为%d\n平均值为%.2lf", count_ou, num_min,averge);


}