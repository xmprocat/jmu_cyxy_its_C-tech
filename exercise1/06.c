#include <stdio.h>
/*
从键盘上输入一个百分制成绩 score，
按下列原则输出其等级：score≥90， 等级为 A；
80≤score<90，等级为B；
70≤score<80，等级为C；
60≤score<70，等级为D；
score<60等级为E。
BY：老猫
*/
int main() {
    int score;
    printf("请从键盘上输入一个百分制成绩以回车结束：\n");
    scanf("%d",&score);
    if(score>=90){
        printf("等级为A\n");
    } else if(score>=80 && score<90){
        printf("等级为B\n");
    } else if(score>=70 && score<80){
        printf("等级为C\n");
    } else if(score>=60 && score<70){
        printf("等级为D\n");
    } else if(score>=0 && score<60){
        printf("等级为E\n");
    } else {
        printf("Error!!!!\n");
    }
return 0;
}



