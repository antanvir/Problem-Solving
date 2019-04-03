#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,n,c=1,p=0,l,f=1;
    char s[1002],a[1002],r[1002]="";
    scanf("%d",&n);
    getchar();
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++){
            if(s[i]<97 || s[i]>122) f=0;
        for(j=i+1;j<l;j++){
            if(s[j]==s[i] && f==1 && (97<=s[i] && s[i]<=122)) { c++;   s[j]='*';   }
        }
        if(f==0)   c=0;
     //   puts(s);
       // printf("%d    %d\n",f,c);
        if(c%n){ printf("-1");  return 0; }
        else{
            for(k=0;k<c/n;k++){
                a[p]=s[i]-1+1;  p++;
            }
        }
        c=1;    f=1;
    }
    a[p]='\0';
    for(i=1;i<=n;i++)
            strcat(r,a);
    puts(r);
    return 0;
}
