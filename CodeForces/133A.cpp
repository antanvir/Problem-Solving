#include<stdio.h>
#include<string.h>

int main(){
    char a[101];
    int k,i;
    gets(a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>=33 && a[i]<=126){
            if((a[i]=='H') || (a[i]=='Q')  || (a[i]=='9')){
                k=1;
                break;
            }

             else   k=2;
        }
        k=2;
    }
    if(k==1) printf("YES\n");
    if(k==2) printf("NO\n");

    return 0;
}
