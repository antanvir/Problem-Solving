#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char a[33];
    long long int s=0;
    int i,j,k,r;
   for(;;){
        gets(a);

        if(a[0]=='0') goto last;
        j=strlen(a);

        for(k=0;k<j;k++){
            r=a[k]-'0';
            s=s+r*(pow(2,j-k)-1);
        }
        printf("%lld\n",s);
        s=0;
    }
    last:
        return 0;
}
