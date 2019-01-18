#include <stdio.h>
/*
输入一个圆半径（r），当 r>＝0时，计算并输出圆的面积和周长，否则，输出提示信息。
BY：老猫
*/
int main(){
    double r=-1;
    double pi = 3.141;
    double S = 0;
    double C = 0;
    input:
    printf("请输入圆的半径：\n");
    scanf("%lf",&r);

    if(r>=0) {
           S=pi*r*r;
           C=2*pi*r ;
        printf("面积约为%d 周长约为%d",(int)S,(int)C);
    } else {

    printf("输入有误");
    fflush(stdin);
    goto input;
    }
return 0;
}
