#include <stdio.h>
float price;
char DJ;
int main()
{
    input:
    fflush(stdin);
    printf("请从键盘上输入一个消费金额以回车结束：\n");
    scanf("%f",&price);
    fflush(stdin);
    printf("请从键盘上输入一个会员等级以回车结束：\n");
    scanf("%c",&DJ);
    if(price<=0){
       printf("Error Price!!!\n");
       goto input;
    }
    if(DJ>='a' && DJ<='d') {DJ -= 32;}
    if(DJ>='A' && DJ<='D'){
        switch(DJ){
        case 'A':{price *= 0.8;}break;
        case 'B':{price *= 0.85;}break;
        case 'C':{price *= 0.9;}break;
        case 'D':{price *= 0.95;}break;
        }
        printf("shou : %6.3f \n",price);
    } else {
        printf("Error in DJ!!!\n");
        goto input;

    }


    return 0;
}
