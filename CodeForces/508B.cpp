#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
   long long i,j,n,l,pos,c=0;
    char s[200000],min='0',t;
    gets(s);
    l=strlen(s);
    //if(l>6){  printf("-1");  return 0;    }
    for(i=0;i<l;i++){
        if(s[i]=='0' ||s[i]=='2' ||s[i]=='4' ||s[i]=='6' ||s[i]=='8'){
            c++;
            if(s[l-1]>s[i]){  pos=i;  break; }
            else if(s[l-1]<s[i]){  pos=i;  }
        }
    }
    if(c==0)    printf("-1");
    else{
       t=s[pos];
       s[pos]=s[l-1];   s[l-1]=t;
        puts(s);
       // n=atoi(s);
       // printf("%I64d",n);
    }
    return 0;
}
