#include<stdio.h>
#include<string.h>

int main(){
    int i,j;
    char a[1000001],b[1000001];
    gets(a);
    j=strlen(a);
    for(i=0;i<j;i++){
        printf("%c",a[i]);
    }
    for(i=0;i<j;i++){
       b[i]=a[j-1-i];
       printf("%c",b[i]);
    }
     return 0;
}
