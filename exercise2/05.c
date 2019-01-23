#include <stdio.h>
/*
 输入一个学生成绩，大于 80，输出：奖励辟邪剑法！
*/
int main() {
    int score;
    printf("请从键盘上输入一个百分制成绩以回车结束：\n");
    scanf("%d",&score);
    if(score>=80){
        printf("奖励辟邪剑法!\n");
    } else {
        printf("Error!!!!\n");
    }
return 0;
}

