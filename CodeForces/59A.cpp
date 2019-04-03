#include<stdio.h>
#include<string.h>

int main(){
    int a=0,b=0,i;
    char s[101];
    gets(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]>='A' && s[i]<='Z')  a++;
        else if(s[i]>='a' && s[i]<='z') b++;
    }
    for(i=0;i<strlen(s);i++){
        if(a<b && s[i]>='A' && s[i]<='Z')   s[i]=s[i]+32;
        else if(b<a && s[i]>='a' && s[i]<='z')  s[i]=s[i]-32;
        else if(a==b && s[i]>='A' && s[i]<='Z')    s[i]=s[i]+32;
    }
    printf(s);
    return 0;
}
