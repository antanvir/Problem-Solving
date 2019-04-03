#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k,t=0,n,tmp;
    int a[5001];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(k=1;k<=n;k++){
        for(j=0;j<n;j++){
            if(k==a[j]){
                t++;
                break;
            }
        }
    }
    printf("%d",n-t);
    return 0;
}
