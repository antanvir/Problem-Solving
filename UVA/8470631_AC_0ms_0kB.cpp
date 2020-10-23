#include<stdio.h>

int main(){
    long long int i,x,j,k,c=0;
    int a1[33],r;
    for(i=0;;i++){
        scanf("%lld",&x);
        if(x==0)   break;

        for(j=0;x!=0;j++){
            a1[j]=x%2;
            if(a1[j]==1) c++;
            x=x/2;
        }

        printf("The parity of ");
        for(k=j-1;k>=0;k--){
            printf("%d",a1[k]);
        }
        printf(" is %d (mod 2).\n",c);

        c=0; 
    }
    return 0;
}
