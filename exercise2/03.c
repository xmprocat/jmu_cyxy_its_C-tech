#include <stdio.h>
/*
�Ӽ��̽���һ���ַ�,�����ַ��Ǵ�д��ת����Сд�����
*/
int main() {

    char x='a';
    printf("�������������д��ĸ����Сд��ĸ��\n");
    scanf("%c",&x);
    if( x>='A' && x<='Z') {
    x = x + 32;
    } else if( x>='a' && x<='z') {
    x = x;
    }
    printf("%c\n",x);



return 0;
}
