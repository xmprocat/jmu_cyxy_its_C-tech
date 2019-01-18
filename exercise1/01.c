#include <stdio.h>
/*
用C语言实现求出100~999之间的所有水仙花数。
水仙花数：是指一个n位的正整数(n>=3),
它的每个数字的 n 次幂之和等于它本身。
BY：老猫
*/
int main() {
    int a,b,c,s;

    for(a=1;a<=9;a++) {//百位
        for(b=0;b<=9;b++) {//十位
            for(c=0;c<=9;c++) {//个位
                s=100*a + 10*b + c;//求和
                if(s==(a*a*a+b*b*b+c*c*c)) {
                 printf("%d是水仙花数\n",s);
                }
            }
        }
    }
return 0;
}
