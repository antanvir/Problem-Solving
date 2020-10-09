#include<stdio.h>
int main(){
    int i,j,n,m,k,a[100],mn,y=110;
    scanf("%d%d%d",&n,&m,&k);
    a[0]=-1;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
     for(i=1;i<=n;i++){
        if(i>m) mn=i-m;
        else if(m>i)   mn=m-i;
        if(a[i]<=k && a[i]!=0 && mn<y && i!=m){  y=mn;    }
     }
     printf("%d",y*10);
     return 0;
}
