#include <stdio.h>
/*
�������ɸ�������ͳ����Щ����ż���ĸ����������Щż���е���Сֵ����ż����ƽ��ֵ
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
	printf("���������֣�");
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
	printf("ż������Ϊ%d\n��СֵΪ%d\nƽ��ֵΪ%.2lf", count_ou, num_min,averge);


}