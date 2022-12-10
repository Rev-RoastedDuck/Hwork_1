/*要举办校园歌手大赛，请编程设计程序，计算歌手的得分。
假定参加比赛的歌手人数为singerNum，评委人数为judgeNum，每名评委对每个歌手的打分为score。
打分规则为每位评委对每位歌手给出一个分数，去掉一个最高分和一个最低分，余下分数的平均值作为选手的最后得分。
要求编程输入歌手人数、评委人数及分数，并根据输入数据自动计算每个歌手的成绩。
*/
//for嵌套
#include <stdio.h>
void main(void) {
	int singerNum, judgeNum;
	int score[20][20];
	singerNum = 0;
	judgeNum = 0;
	//输入
	printf("请输入歌手人数:");
	scanf_s("%d",&singerNum);
	printf("请输入评委人数:");
	scanf_s("%d",&judgeNum);
	for (int num_singer = 0; num_singer < singerNum;num_singer++) {
		printf("请输入第%d名歌手的成绩:",num_singer+1);
		for (int num_judge = 0; num_judge < judgeNum;num_judge++) {
			scanf_s("%d",&score[num_singer][num_judge]);
		}
	}
	//排序，求值
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
	//平均值
	double sum = 0,average = 0;
	for (int num_singer = 0; num_singer < singerNum; num_singer++) {
			for (int i = 1; i < judgeNum - 1; i++) {
				sum += score[num_singer][i];
			}
			average = sum / (judgeNum - 2);
			printf("第%d名选手的成绩为%.2lf\n",num_singer+1,average);
			sum = 0;
			average = 0;
	}


}