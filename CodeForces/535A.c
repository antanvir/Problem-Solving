#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n,v,r;
    char s[3], a[][30]={"one","two","three","four","five","six","seven","eight","nine"},
            b[][30]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    scanf("%d",&n);
    if(n==0)    printf("zero");
    else if(n==10)  printf("ten");
    else if(n==11)    printf("eleven");
    else if(n==12)    printf("twelve");
     else if(n==13)    printf("thirteen");
      else if(n==14)    printf("fourteen");
       else if(n==15)    printf("fifteen");
        else if(n==16)    printf("sixteen");
         else if(n==17)    printf("seventeen");
          else if(n==18)    printf("eighteen");
           else if(n==19)    printf("nineteen");
    else{
        v=n/10;     r=n%10;
        if(v==0)    printf("%s",a[r-1]);
        else if(r==0)    printf("%s",b[v-2]);
        else    printf("%s-%s",b[v-2],a[r-1]);
    }
    return 0;
}
