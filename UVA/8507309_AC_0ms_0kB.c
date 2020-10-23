#include<stdio.h>

int main(){
    long int n,i,s=0;
    for( ; ; ){
        scanf("%ld",&n);
        if(n==0) break;
        for(i=1;i<=n;i++){
            s+=i*i;
        }
        printf("%ld\n",s);
        s=0;
    }
    return 0;
}
