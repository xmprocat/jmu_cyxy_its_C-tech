#include <stdio.h>
/*
�Ӽ��̽���һ��������Ϊ���,�жϸ�����Ƿ�������
BY����è
*/
int leap_year(int yr);
int main() {
    int year = 0;
	while (1) { //�򵥵������߼��ж�
    printf("�������꣬�Իس�������\n");
    scanf("%d",&year);
    fflush(stdin);
    if(year > 0) {
        break;
    } else
    {
        printf("������󣡣���\n");
    }
}
	leap_year(year);


return 0;
}
int leap_year(int yr) {
    int dy = 0;
    if(yr%400==0 || (yr%4==0 && yr%100!=0)) {
       // dy = 29;
       printf("%d������",yr);
    } else {
       // dy = 28;
       printf("%d��ƽ��",yr);
    }
    return dy;
}
