#include<stdio.h>

int main(){
    int a,b,m,i,c=0;
    scanf("%d %d",&a,&b);
    if(a>b) m=a;
    else m=b;
    for(i=m;i<=6;i++){
        c++;
    }
    if(c%2==0 && c%6!=0){
        c=c/2;
        printf("%d/3",c);
    }
    else if(c%3==0 && c%6!=0){
        c=c/3;
        printf("%d/2",c);
    }
    else if(c%6==0){
        c=c/6;
        printf("%d/1",c);
    }
    else printf("%d/6",c);

    return 0;
}
