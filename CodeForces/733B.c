#include<stdio.h>
int main(){
    long long int i,j,n,k,s1=0,s2=0,a[100000][2],r,z,cl=0;
    scanf("%I64d",&n);
    for(i=0;i<n;i++){
        scanf("%I64d%I64d",&a[i][0],&a[i][1]);
        s1+=a[i][0];        s2+=a[i][1];
    }
    if(s1>=s2)  r=s1-s2;
    else r=s2-s1;
    for(i=0;i<n;i++){
        s1=s1-a[i][0]+a[i][1];  s2=s2-a[i][1]+a[i][0];
        if(s1>=s2)  z=s1-s2;
        else    z=s2-s1;
        if(z>r){   r=z;   cl=i+1;  }
        s1=s1+a[i][0]-a[i][1];  s2=s2+a[i][1]-a[i][0];
    }
    printf("%I64d",cl);
    return 0;
}
