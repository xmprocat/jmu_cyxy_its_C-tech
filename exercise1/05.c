#include <stdio.h>
/*
�Ӽ���������������ѵ����䣬
�ж�˭��������󣬲���ӡ����ߵ����䡣
BY����è
*/
int main() {
    int a=0,b=0;
    printf("���Ⱥ�������������ѵ����䣬����ÿ�����Իس�������\n");
    scanf("%d",&a);
    fflush(stdin);
    scanf("%d",&b);
    if(a>b) {
        printf("����������%d��",a);
    } else if(b>a) {
        printf("�����ѵ��������%d��",b);
    } else {
        printf("һ������%d��",b);

    }
return 0;
}


