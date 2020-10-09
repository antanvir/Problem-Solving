#include<stdio.h>

int main(){
    int i,j,m,n,k,r;
    scanf("%d %d",&k,&r);
    for(i=1;i<=9;i++){
        m=0;
        m=k*i;
        j=m%10;
        if((j==r)||(j==0)){
                n=1;
                printf("%d",i);
                break;
        }
        else if(j!=r && j!=0)    n=2;
    }
    if(n==2)    printf("10");
    return 0;
}
