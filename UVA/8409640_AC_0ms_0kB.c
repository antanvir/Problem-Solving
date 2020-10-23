#include<stdio.h>

int main(){
    int tst,n,i,j,cnt=0;
    double a[1001],avg=0.0,ap;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        avg = 0.0;
        scanf("%lf",&a[0]);
        for(j=1;j<=a[0];j++){
            scanf("%lf",&a[j]);
            avg=avg+a[j];
        }
        ap=avg/a[0];
        for(j=1;j<=a[0];j++){
            if(a[j]>ap){
                cnt++;
            }
        }
        printf("%.3f%%\n",(cnt/a[0])*100);
        cnt=0;
    }
    return 0;
}

