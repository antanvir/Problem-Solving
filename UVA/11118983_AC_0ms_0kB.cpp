#include<stdio.h>

int main(){
    long int i,j,k,n,l,c=0;
    int a[50],tmp;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&l);

        for(j=0;j<l;j++){
            scanf("%d",&a[j]);
        }
        for(k=0;k<l;k++){
            for(j=k+1;j<l;j++){
                if(a[k]>a[j]){
                    tmp=a[k];
                    a[k]=a[j];
                    a[j]=tmp;
                    c++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
        c=0;
    }
    return 0;
}

