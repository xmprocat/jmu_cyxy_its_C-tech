#include <stdio.h>
/*
从键盘接收一个字符,若该字符是大写则转换成小写并输出
*/
int main() {

    char x='a';
    printf("请您输入任意大写字母或者小写字母：\n");
    scanf("%c",&x);
    if( x>='A' && x<='Z') {
    x = x + 32;
    } else if( x>='a' && x<='z') {
    x = x;
    }
    printf("%c\n",x);



return 0;
}
