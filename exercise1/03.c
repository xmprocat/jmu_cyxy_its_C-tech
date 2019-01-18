#include <stdio.h>
/*
????
BY:??
*/
int main() {
    int x=0,y=0;
    printf("«Î ‰»Îx£∫\n");
    scanf("%d",&x);
    if(x<0) {
        y = 2*x + 1;
        printf("y=%d\n",y);
    } else if(x==0){
        y = 0;
        printf("y=%d\n",y);
    } else if(x>0) {
        y = 2*x - 1;
        printf("y=%d\n",y);
    }


return 0;
}
