#include <stdio.h>
/*
�Ӽ���������һ���ٷ��Ƴɼ� score��
������ԭ�������ȼ���score��90�� �ȼ�Ϊ A��
80��score<90���ȼ�ΪB��
70��score<80���ȼ�ΪC��
60��score<70���ȼ�ΪD��
score<60�ȼ�ΪE��
BY����è
*/
int main() {
    int score;
    printf("��Ӽ���������һ���ٷ��Ƴɼ��Իس�������\n");
    scanf("%d",&score);
    if(score>=90){
        printf("�ȼ�ΪA\n");
    } else if(score>=80 && score<90){
        printf("�ȼ�ΪB\n");
    } else if(score>=70 && score<80){
        printf("�ȼ�ΪC\n");
    } else if(score>=60 && score<70){
        printf("�ȼ�ΪD\n");
    } else if(score>=0 && score<60){
        printf("�ȼ�ΪE\n");
    } else {
        printf("Error!!!!\n");
    }
return 0;
}



