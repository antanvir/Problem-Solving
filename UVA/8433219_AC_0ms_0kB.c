#include<stdio.h>

int main(){
    long int t,i,a,b,c;
    scanf("%ld",&t);
    for(i=1;i<=t;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        if((a>b && b>c)||(c>b && b>a))  printf("Case %ld: %ld\n",i,b);
        else if((a>c && c>b)||(b>c && c>a))  printf("Case %ld: %ld\n",i,c);
        else if((b>a && a>c)||(c>a && a>b))  printf("Case %ld: %ld\n",i,a);

    }
    return 0;

}
