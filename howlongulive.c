#include <stdio.h>
/*
�ж��������ڵļ��.
BY����è
*/
int leap_year(int yr);
int month_day(int m,int y);
int _count_month_day_(int mo,int ye);
int main() {

int year = 0,month = 0,day = 0,fackday = 0;
int now_year =0,now_month =0,now_day =0;
int year_cha = 0,day_cha =0,huo = 0;

while (1) { //�򵥵������߼��ж�
    printf("���������꣬�Իس�������\n");
    scanf("%d",&year);
    fflush(stdin);
    printf("���������£��Իس�������\n");
    scanf("%d",&month);
    fflush(stdin);
    printf("���������գ��Իس�������\n");
    scanf("%d",&day);
    fflush(stdin);
    fackday = 30 + (month + (month > 7)) % 2 - (month == 2) * (2 - ((!(year % 4) && year % 100) || !(year % 400)));
    if(year > 0 && month > 0 && day >0 && day <= 31 && month <=12) {
            if(day<=fackday) {
                break;
            } else {
                printf("������󣡣���\n");
                continue;}

    } else
    {
        printf("������󣡣���\n");
    }
}
//system("cls");
printf("\n%d��%d��%d��",year,month,day);
printf("������ĵ�%d�졣\n",_count_month_day_(month,year) + day);

while (1) { //�򵥵������߼��ж�
    printf("�����뵱ǰ�꣬�Իس�������\n");
    scanf("%d",&now_year);
    fflush(stdin);
    printf("�����뵱ǰ�£��Իس�������\n");
    scanf("%d",&now_month);
    fflush(stdin);
    printf("�����뵱ǰ�գ��Իس�������\n");
    scanf("%d",&now_day);
    fflush(stdin);
    fackday = 30 + (now_month + (now_month > 7)) % 2 - (now_month == 2) * (2 - ((!(now_year % 4) && now_year % 100) || !(now_year % 400)));
    if(now_year > 0 && now_month > 0 && now_day >0 && now_day <= 31 && now_month <=12) {
            if(now_day<=fackday) {
                break;
            } else {
                printf("������󣡣���\n");
                continue;}

    } else
    {
        printf("������󣡣���\n");
    }
}
    printf("\n%d��%d��%d��",now_year,now_month,now_day);
    printf("�ǵ�ǰ��ĵ�%d�졣\n",_count_month_day_(now_month,now_year) + now_day);

    year_cha = now_year - year;
    if(year_cha < 0) {
            printf("������ݵĲ��ʱ��������\n");
            exit(-1);
            }
    printf("��ǰ���������%d��\n",year_cha);
    while(year < now_year){
        day_cha += (_count_month_day_(12,year) + 31);
        year ++;
    }
    day_cha += (_count_month_day_(now_month,now_year) + now_day);

    printf("��ǰ���ھ�������%d��\n",day_cha);

    huo = day_cha - (_count_month_day_(now_month,now_year) + now_day);
    printf("һ������%d��\n",huo);

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
