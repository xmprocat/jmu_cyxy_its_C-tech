#include <stdio.h>
/*
�ж�һ������ż����������
BY����è
*/
int main() {
    int iCount = 0;
	int iRes;
	printf("������һ�������Իس�������\n");
    scanf("%d",&iCount);
    fflush(stdin);
	iRes = iCount % 2;
		if (iRes) {
			printf("%d ������\n", iCount);
		} else {
			printf("%d ��ż��\n", iCount);
		}

	/*	iRes = iCount & 1;
		if (iRes) {
			printf("%d ����\n", iCount);
		}
		else {
			printf("%d ż��\n", iCount);
		}
		*/


return 0;
}
