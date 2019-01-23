#include <stdio.h>
/*
判断一个数是偶数还是奇数
BY：老猫
*/
int main() {
    int iCount = 0;
	int iRes;
	printf("请输入一个数，以回车结束：\n");
    scanf("%d",&iCount);
    fflush(stdin);
	iRes = iCount % 2;
		if (iRes) {
			printf("%d 是奇数\n", iCount);
		} else {
			printf("%d 是偶数\n", iCount);
		}

	/*	iRes = iCount & 1;
		if (iRes) {
			printf("%d 奇数\n", iCount);
		}
		else {
			printf("%d 偶数\n", iCount);
		}
		*/


return 0;
}
