#include<stdio.h>

int main(){
double a[100],r=0;
 int i,n;
 scanf("%d",&n);

 for(i=0;i<n;i++){
    scanf("%lf",&a[i]);
    r=r+a[i];
 }
 printf("%lf",r/n);
 return 0;
}