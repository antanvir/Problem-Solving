#include<stdio.h>
#include<string.h>


int main(){
    int i,k,j,n,t,tmp,f,m=1,s=0;
    char a[51][6];int y[51];

    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",a[i]);
    }
    for(j=0;j<t;j++){
            for(k=strlen(a[j])-1;k>=0;k--){
                s+=(a[j][k]-'0')*m;
                m*=10;
            }
            y[j]=s;
            s=0;m=1;
    }
    for(i=0;i<t;i++){
        for(k=i+1;k<t;k++){
            if(y[i]>y[k]){
                tmp=y[i];
                y[i]=y[k];
                y[k]=tmp;
            }
        }
    }
    for(j=0;j<t;j++){
        for(i=1;i<t;i++){
            if((y[j]-y[j-1]==1)&&(y[j+i]-y[j]==1)){
                f=1;
                break;
            }
            else f=2;
        }
        if(f==1)    break;
    }
    if(f==1)    printf("YES");
    else if(f==2)   printf("NO");
    return 0;
}
