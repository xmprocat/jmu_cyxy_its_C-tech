#include <stdio.h>
/*
�Ӽ�������һ���������жϸ����ǲ����� 100-999 ֮��
*/
int main() {
    int n = 0;
    printf("������һ�������Իس�������\n");
    scanf("%d",&n);
    fflush(stdin);
    if( n>=100 && n<=999) {
    printf("%d �ڷ�Χ��",n);
    } else {
    printf("%d ���ڷ�Χ��",n);
    }



return 0;
}
