#include <stdio.h>
/*
输入某年某月某日，判断这一天是这一年的第几天？
BY：老猫
*/
int leap_year(int yr);
int month_day(int m,int y);
int _count_month_day_(int mo,int ye);
int main() {

int year,month,day,fackday;

while (1) { //简单的输入逻辑判断
    printf("请输入年，以回车结束：\n");
    scanf("%d",&year);
    fflush(stdin);
    printf("请输入月，以回车结束：\n");
    scanf("%d",&month);
    fflush(stdin);
    printf("请输入日，以回车结束：\n");
    scanf("%d",&day);
    fflush(stdin);
    fackday = 30 + (month + (month > 7)) % 2 - (month == 2) * (2 - ((!(year % 4) && year % 100) || !(year % 400)));
    if(year > 0 && month > 0 && day >0 && day <= 31 && month <=12) {
            if(day<=fackday) {
                break;
            } else {
                printf("输入错误！！！\n");
                continue;}

    } else
    {
        printf("输入错误！！！\n");
    }
}
//system("cls");
printf("\n%d年%d月%d日",year,month,day);
printf("是这年的第%d天。\n",_count_month_day_(month,year) + day);
out:return 0;
}

int leap_year(int yr) {
    int dy = 0;
    if(yr%400==0 || (yr%4==0 && yr%100!=0)) {
        dy = 29;
    } else {
        dy = 28;
    }
    return dy;
}
int month_day(int m,int y) {
    int d;
    switch(m){
    case 1 :
        d = 31;
    break;
    case 2 :
        d=leap_year(y);
    break;
    case 3 :
        d = 31;
    break;
    case 4 :
        d = 30;
    break;
    case 5 :
        d = 31;
    break;
    case 6 :
        d = 30;
    break;
    case 7 :
        d = 31;
    break;
    case 8 :
        d = 31;
    break;
    case 9 :
        d = 30;
    break;
    case 10 :
        d = 31;
    break;
    case 11 :
        d = 30;
    break;
    case 12 :
        d = 31;
    break;

}
    return d;
}
int _count_month_day_(int mo,int ye) {
    int i = 1;
    int m_day = 0;
    for(i=1;i<=mo-1;i++) {
        m_day += month_day(i,ye);
    }
return m_day;
}
