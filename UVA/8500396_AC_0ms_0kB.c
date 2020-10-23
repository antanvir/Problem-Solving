#include<stdio.h>
#include<math.h>

char a[33],b[33];
long long int r;

int main(){
    long long int m,n;
    int i,k;
    int z[33];
    while(scanf("%lld %lld",&m,&n)!=EOF){

    for(i=31;i>=0;i--){
        a[i]=m%2;
        m=m/2;
    }
    for(i=31;i>=0;i--){
        b[i]=n%2;
        n=n/2;
    }
        for(i=31;i>=0;i--){
            z[i]=((a[i]-'0')+(b[i]-'0'))%2;
        }
        r=0;
        for(k=31;k>=0;k--){
            r=r+z[k]*pow(2,(31-k));
        }
        printf("%lld\n",-r);
    }
    return 0;
}
