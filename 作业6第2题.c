/*
有5名学生，每个学生的数据包括学号、姓名、三门课程的成绩score[3]的信息。
请编写input函数用于录入5个学生数据，用average函数求该生三门课程的平均分，用fail函数查找课程不及格（分数低于60）的学生。
要求在主函数中分别输出平均分最高的学生信息和不及格的学生信息。
*/
#include<stdio.h>
#include<string.h>

#define IDLENTH 10
#define NAMELENTH 20
#define SCORELENTH 3
#define STUNUMBER 5

typedef struct stduent {
    char ID[IDLENTH];
    char name[NAMELENTH];
    int score[SCORELENTH];
    double average;
    int fail[SCORELENTH];
    
}STU;

void main(void) {
    void input(STU * s);
    void average(STU * s);
    void fail(STU * s);
    void compare(STU * s);
    STU StuInformation[STUNUMBER];
    //输入
    input(StuInformation);
    printf("\n");
    average(StuInformation);
    compare(StuInformation);
    printf("\n");
    fail(StuInformation);
    printf("\n");
    printf("0");
    

}



void input(STU* s) {
    char name_temp[NAMELENTH]="/0";

    for(int i = 0; i < STUNUMBER;i++) {
        printf("请输入你的学号(十位):");
        for (int j = 0; j < IDLENTH; j++) {
            scanf_s("%c", &s[i].ID[j]);
        }
        scanf_s("%*[^\n]");
        scanf_s("%*c");

        printf("请输入你的姓名:");
        scanf_s("%s", &name_temp, NAMELENTH);
        strcpy_s(s[i].name, NAMELENTH, name_temp);//重要
        scanf_s("%*[^\n]");
        scanf_s("%*c");
        printf("请输入你的成绩(用空格隔开):");
        for (int k = 0; k < SCORELENTH; k++) {
            scanf_s("%d", &s[i].score[k]);
        }
    }
}
void average(STU*s){
    double sum=0;
    for (int i = 0; i < STUNUMBER; i++) {
        sum = 0;
        for (int j = 0; j < SCORELENTH;j++) {
            sum += s[i].score[j];
        }
        s[i].average = sum / SCORELENTH;

    }

}
void fail(STU*s) {
    for (int i = 0; i < STUNUMBER; i++) {
        printf("%s同学的成绩信息\n",s[i].name);
        for (int j = 0; j < SCORELENTH; j++) {
            if(s[i].score[j]<60) {
                s[i].fail[j] = 0;//不及格
                printf("\t第%d门课程不及格\n",j+1);
            }
            else {
                s[i].fail[j] = 1;//及格
                printf("\t第%d门课程及格\n", j + 1);
            }
        }
        printf("\n");
       

    }

}
void compare(STU* s) {
    int max = s[0].average;
    int index = 0;
    for (int i = 1; i < STUNUMBER-1; i++) {
        if(s[i].average>max) {
            max = s[i].average;
            index = i;
        }
    }
    printf("平均分最高的是%s同学,其平均分为%d\n",s[index].name,max);
}
