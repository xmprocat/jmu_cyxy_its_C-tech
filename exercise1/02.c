#include <stdio.h>
/*
����һ��Բ�뾶��r������ r>��0ʱ�����㲢���Բ��������ܳ������������ʾ��Ϣ��
BY����è
*/
int main(){
    double r=-1;
    double pi = 3.141;
    double S = 0;
    double C = 0;
    input:
    printf("������Բ�İ뾶��\n");
    scanf("%lf",&r);

    if(r>=0) {
           S=pi*r*r;
           C=2*pi*r ;
        printf("���ԼΪ%d �ܳ�ԼΪ%d",(int)S,(int)C);
    } else {

    printf("��������");
    fflush(stdin);
    goto input;
    }
return 0;
}
