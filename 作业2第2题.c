/*Ҫ�ٰ�У԰���ִ�����������Ƴ��򣬼�����ֵĵ÷֡�
�ٶ��μӱ����ĸ�������ΪsingerNum����ί����ΪjudgeNum��ÿ����ί��ÿ�����ֵĴ��Ϊscore��
��ֹ���Ϊÿλ��ί��ÿλ���ָ���һ��������ȥ��һ����߷ֺ�һ����ͷ֣����·�����ƽ��ֵ��Ϊѡ�ֵ����÷֡�
Ҫ�������������������ί���������������������������Զ�����ÿ�����ֵĳɼ���
*/
//forǶ��
#include <stdio.h>
void main(void) {
	int singerNum, judgeNum;
	int score[20][20];
	singerNum = 0;
	judgeNum = 0;
	//����
	printf("�������������:");
	scanf_s("%d",&singerNum);
	printf("��������ί����:");
	scanf_s("%d",&judgeNum);
	for (int num_singer = 0; num_singer < singerNum;num_singer++) {
		printf("�������%d�����ֵĳɼ�:",num_singer+1);
		for (int num_judge = 0; num_judge < judgeNum;num_judge++) {
			scanf_s("%d",&score[num_singer][num_judge]);
		}
	}
	//������ֵ
	int temp;
	for (int num_singer = 0; num_singer < singerNum; num_singer++) {
		for (int num_judge = 0; num_judge < judgeNum; num_judge++) {
			for (int num_judge_1 = num_judge+1; num_judge_1 < judgeNum; num_judge_1++) {
				if (score[num_singer][num_judge] < score[num_singer][num_judge_1]) {
					temp = score[num_singer][num_judge];
					score[num_singer][num_judge] = score[num_singer][num_judge_1];
					score[num_singer][num_judge_1] = temp;
				}

			}
		}
	}
	//ƽ��ֵ
	double sum = 0,average = 0;
	for (int num_singer = 0; num_singer < singerNum; num_singer++) {
			for (int i = 1; i < judgeNum - 1; i++) {
				sum += score[num_singer][i];
			}
			average = sum / (judgeNum - 2);
			printf("��%d��ѡ�ֵĳɼ�Ϊ%.2lf\n",num_singer+1,average);
			sum = 0;
			average = 0;
	}


}