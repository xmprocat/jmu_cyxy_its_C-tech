#include <stdio.h>
/*
编写一个程序,从 6 个整数中找出最小的数,并显示此数
BY：老猫
*/
int main() {
    int a=0,i=1;
    int min=99999;
    printf("请输入6个数，输入每个数以回车结束：\n");
    while(i<=6) {
        scanf("%d",&a);
        if(a<min) {
            min = a;
        } else {
            min;
        }
        fflush(stdin);
        i++;
    }
   printf("min=%d\n",min);


return 0;
}

