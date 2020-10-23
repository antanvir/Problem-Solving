#include<stdio.h>

int main(){
    int i,a,b;
    for(i=1;i<=200;i++){
        scanf("%d %d",&a,&b);
        if(a==-1 && b==-1) break;

        if(a>b && a-b<=50)  printf("%d\n",a-b);
        else if(a>b && a-b>50)  printf("%d\n",100-(a-b));

        else if(b>a && b-a<=50)  printf("%d\n",b-a);
        else if(b>a && b-a>50)  printf("%d\n",100-(b-a));

        else if(a==b)   printf("%d\n",0);
    }
    return 0;
}
