#include<stdio.h>
int main(){
    long long int i,j,n,k,a[100000];
    scanf("%I64d%I64d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%I64d",&a[i]);
     for(i=0;i<n;i++){
        if(k>i) k-=i;
        else break;
     }
     printf("%I64d",a[k-1]);
     return 0;
}
