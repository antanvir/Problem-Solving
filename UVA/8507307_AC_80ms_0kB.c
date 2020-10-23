#include<stdio.h>

int main(){
    int i,j,k,r,n,m;
    long int s=0;
    for( ; ; ){
        scanf("%d",&n);
        if(n==0)    break;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                k=j; m=i;
                for( ;m!=0 ; ){
                    r=k%m;
                    k=m;
                    m=r;
                }
                s=s+k;
            }
        }
        printf("%ld\n",s);
        s=0;
    }
    return 0;
}
