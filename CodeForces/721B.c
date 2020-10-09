#include<stdio.h>
#include<string.h>
int n,x[100],c=0;
int len(char*z){
    x[c]=strlen(z);
    c++;
}
int main(){
    int i,j,k,t=0,s=0,y;
    char a[100][102],p[102];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    scanf("%s",p);
    y=strlen(p);
    for(i=0;i<n;i++){
        len(a[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]<y) t++;
        if(x[i]==y) s++;
    }
  //  printf("%d  ,  %d\n",t,s);
    printf("%d %d",t+1+t/k*5,t+s+(t+s-1)/k*5);
    return 0;
}
