#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k;
    char a[101];
    gets(a);
    for(i=0;i<strlen(a);i++){
        if((a[i]=='1'&&a[i+1]=='1'&&a[i+2]=='1'&&a[i+3]=='1'&&a[i+4]=='1'&&a[i+5]=='1'&&a[i+6]=='1')||
                                                                (a[i]=='0'&&a[i+1]=='0'&&a[i+2]=='0'&&a[i+3]=='0'&&a[i+4]=='0'&&a[i+5]=='0'&&a[i+6]=='0')){
                k=1;
                break;
        }
        else k=2;
    }
    if(k==1)    printf("YES");
    else if(k==2)   printf("NO");
    return 0;
}
