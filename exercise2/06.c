#include <stdio.h>
/*
  ����һ���������ʽ������ʾ���Ľ���������������ӣ������ˣ�����ȡ�ࡣ��ϰ switch����
*/
int main() {
    float a,b;
    char op;
    printf("��Ӽ���������һ���������ʽ�Իس�����������5+6����\n");
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
            if (b) {//��0��ִ��
                    printf("%f", a/b);//��ĸ������0
            }else {
                printf("Error!!!");
            }
            break;
    }
return 0;
}


