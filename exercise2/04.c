#include <stdio.h>
/*
从键盘输入一个整数，判断该数是不是在 100-999 之间
*/
int main() {
    int n = 0;
    printf("请输入一个数，以回车结束：\n");
    scanf("%d",&n);
    fflush(stdin);
    if( n>=100 && n<=999) {
    printf("%d 在范围内",n);
    } else {
    printf("%d 不在范围内",n);
    }



return 0;
}
