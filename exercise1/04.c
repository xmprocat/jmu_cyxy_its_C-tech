#include <stdio.h>
/*
��дһ������,�� 6 ���������ҳ���С����,����ʾ����
BY����è
*/
int main() {
    int a=0,i=1;
    int min=99999;
    printf("������6����������ÿ�����Իس�������\n");
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

