#include<iostream>
using namespace std;
int main(){
    int i,j,k,Q=0,q=0,R=0,r=0,B=0,b=0,N=0,n=0,P=0,p=0,w,bl;
    char a[8][10];
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            cin>>a[i][j];
            if(a[i][j]=='Q')Q++;
            else if(a[i][j]=='R')R++;
            else if(a[i][j]=='B')B++;
            else if(a[i][j]=='N')N++;
            else if(a[i][j]=='P')P++;
            else if(a[i][j]=='q')q++;
            else if(a[i][j]=='r')r++;
            else if(a[i][j]=='b')b++;
            else if(a[i][j]=='n')n++;
            else if(a[i][j]=='p')p++;
        }
    }
        w=Q*9+R*5+B*3+N*3+P*1;      bl=q*9+r*5+b*3+n*3+p*1;
        if(w==bl) cout<<"Draw";
        else if(w>bl)    cout<<"White";
        else cout<<"Black";
        return 0;
}
