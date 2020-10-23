#include<stdio.h>

int main(){
    int t,a,b,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",(a/3)*(b/3));
    }
    return 0;
}
