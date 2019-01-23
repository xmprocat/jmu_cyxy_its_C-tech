#include <stdio.h>
/*
从键盘接收一个整数作为年份,判断该年份是否是闰年
BY：老猫
*/
int leap_year(int yr);
int main() {
    int year = 0;
	while (1) { //简单的输入逻辑判断
    printf("请输入年，以回车结束：\n");
    scanf("%d",&year);
    fflush(stdin);
    if(year > 0) {
        break;
    } else
    {
        printf("输入错误！！！\n");
    }
}
	leap_year(year);


return 0;
}
int leap_year(int yr) {
    int dy = 0;
    if(yr%400==0 || (yr%4==0 && yr%100!=0)) {
       // dy = 29;
       printf("%d是闰年",yr);
    } else {
       // dy = 28;
       printf("%d是平年",yr);
    }
    return dy;
}
