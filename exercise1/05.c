#include <stdio.h>
/*
从键盘输入你和你朋友的年龄，
判断谁的年龄最大，并打印最大者的年龄。
BY：老猫
*/
int main() {
    int a=0,b=0;
    printf("请先后输入你和你朋友的年龄，输入每个数以回车结束：\n");
    scanf("%d",&a);
    fflush(stdin);
    scanf("%d",&b);
    if(a>b) {
        printf("你的年龄大，是%d岁",a);
    } else if(b>a) {
        printf("你朋友的年龄大，是%d岁",b);
    } else {
        printf("一样大，是%d岁",b);

    }
return 0;
}


