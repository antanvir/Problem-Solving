#include<stdio.h>
int main(){
    long  int i,j,n,m;
    scanf("%ld%ld",&n,&m);
    for(i=1;i<=n;i++){
        if(i<=m)    m-=i;
        else break;
        if(i==n)    i=0;
    }
    printf("%ld",m);
    return 0;
}
