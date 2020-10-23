#include<stdio.h>

int main(){
    long long int n,s=1,i;
    for(;;){
        scanf("%lld",&n);
        if(n<0) break;
        for(i=1;i<=n;i++){
            s=s+i;
        }
        printf("%lld\n",s);
        s=1;
    }
    return 0;
}
