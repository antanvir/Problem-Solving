#include<stdio.h>

int main(){
    int i,j,n,e,f,c,cnt=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d %d %d",&e,&f,&c);
        for(j=e+f; j>=c; j=j-c+1){
            cnt++;
        }
        printf("%d\n",cnt);
        cnt=0;
    }
    return 0;
}
