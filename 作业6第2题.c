/*
��5��ѧ����ÿ��ѧ�������ݰ���ѧ�š����������ſγ̵ĳɼ�score[3]����Ϣ��
���дinput��������¼��5��ѧ�����ݣ���average������������ſγ̵�ƽ���֣���fail�������ҿγ̲����񣨷�������60����ѧ����
Ҫ�����������зֱ����ƽ������ߵ�ѧ����Ϣ�Ͳ������ѧ����Ϣ��
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
    //����
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
        printf("���������ѧ��(ʮλ):");
        for (int j = 0; j < IDLENTH; j++) {
            scanf_s("%c", &s[i].ID[j]);
        }
        scanf_s("%*[^\n]");
        scanf_s("%*c");

        printf("�������������:");
        scanf_s("%s", &name_temp, NAMELENTH);
        strcpy_s(s[i].name, NAMELENTH, name_temp);//��Ҫ
        scanf_s("%*[^\n]");
        scanf_s("%*c");
        printf("��������ĳɼ�(�ÿո����):");
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
        printf("%sͬѧ�ĳɼ���Ϣ\n",s[i].name);
        for (int j = 0; j < SCORELENTH; j++) {
            if(s[i].score[j]<60) {
                s[i].fail[j] = 0;//������
                printf("\t��%d�ſγ̲�����\n",j+1);
            }
            else {
                s[i].fail[j] = 1;//����
                printf("\t��%d�ſγ̼���\n", j + 1);
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
    printf("ƽ������ߵ���%sͬѧ,��ƽ����Ϊ%d\n",s[index].name,max);
}
