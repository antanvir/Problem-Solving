#include<iostream>
using namespace std;
int main(){
    int i,j,k,a=0,b=0,r,c,f=1,p=0,f1=1;
    char u[10][10];
    cin>>r>>c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>u[i][j];
            if(u[i][j]=='S')    f=0;
        }
        if(f==1)   a++;
        f=1;
    }
    for(i=0;i<r;i++){
        if(p==c)    break;
        if(u[i][p]=='S'){  i=-1; p++; b++; }
        if(i==r-1 && u[i][p]!='S'){   p++;  i=-1;  }
    }
    
    cout<<a*c+(c-b)*r-a*(c-b);
    return 0;
}
