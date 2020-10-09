#include<stdio.h>
#include<string.h>
int main(){
    long int l,n;
    char s[22];
    gets(s);
    l=strlen(s);
    printf("%ld",26*(l+1)-l);
    return 0;
}
