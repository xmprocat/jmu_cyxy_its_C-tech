#include <stdio.h>
/*
  输入一个算数表达式，并显示它的结果。（算数包括加，减，乘，除，取余。练习 switch）。
*/
int main() {
    float a,b;
    char op;
    printf("请从键盘上输入一个算数表达式以回车结束（例：5+6）：\n");
    scanf("%f%c%f=", &a, &op, &b);
    switch (op) {
        case '+':
            printf("%f", a+b);
            break;
        case '-':
            printf("%f", a-b);
            break;
        case '*':
            printf("%f", a*b);
            break;
        case '/':
            if (b) {//非0才执行
                    printf("%f", a/b);//分母不能是0
            }else {
                printf("Error!!!");
            }
            break;
    }
return 0;
}


