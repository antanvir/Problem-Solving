#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,m,n,a=0,b=0,max=0;
    char s[257];
    scanf("%d",&n);
    getchar();
    scanf("%s",s);
    for(i=0;i<n;i++){
         if(s[i]=='('){
            for(j=i+1;j<n;j++){
                if((65<=s[j] && s[j]<=90)||(97<=s[j] && s[j]<=122)){
                    if(s[j+1]=='_' || s[j+1]==')')  b++;
                }
                if(s[j]==')'){   i=j;    break;  }
            }
        }
        else if((65<=s[i] && s[i]<=90)||(97<=s[i] && s[i]<=122)){
            a++;
            //putchar(s[i]);
            //printf("\n%d\n",a);
            if((s[i+1]=='_' )|| (s[i+1]=='(' )){
                    if(a>max) {  max=a;  a=0;  }
                    a=0;
            }
        }
    }
    if(a>max)   max=a;
    printf("%d %d",max,b);
    return 0;
}
