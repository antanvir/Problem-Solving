#include<stdio.h>
int main(){
    int i,j,k,n,a[102],r=0,m,c;
    scanf("%d%d",&n,&c);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if((a[i]-a[i+1]-c)>r) {r=a[i]-a[i+1]-c;    }
    }
    printf("%d",r);
    return 0;
}
