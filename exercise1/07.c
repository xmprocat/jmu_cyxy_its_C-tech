#include <stdio.h>
/*
����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
BY����è
*/
int leap_year(int yr);
int month_day(int m,int y);
int _count_month_day_(int mo,int ye);
int main() {

int year,month,day;

while (1) { //�򵥵������߼��ж�
    printf("�������꣬�Իس�������\n");
    scanf("%d",&year);
    fflush(stdin);
    printf("�������£��Իس�������\n");
    scanf("%d",&month);
    fflush(stdin);
    printf("�������գ��Իس�������\n");
    scanf("%d",&day);
    fflush(stdin);
    if(year > 0 && month > 0 && day >0 && day <= 31 && month <=12) {
        break;
    } else
    {
        printf("������󣡣���\n");
    }
}
//system("cls");
printf("\n%d��%d��%d��",year,month,day);
printf("������ĵ�%d�졣\n",_count_month_day_(month,year) + day);
return 0;
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
