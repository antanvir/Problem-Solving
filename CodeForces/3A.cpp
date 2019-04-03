#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,x1=0,xa=0,mx,mn;
    char s[3],t[3],y,z,r;
    cin>>s>>t;
    if(s[0]>t[0]){   y='L';   xa=abs(s[0]-t[0]);  }
    else if(s[0]<t[0]){  y='R'; xa=abs(s[0]-t[0]); }
    
    if(s[1]>t[1]){   z='D';   x1=abs(s[1]-t[1]);  }
    else if(s[1]<t[1]){  z='U'; x1=abs(s[1]-t[1]);  }
    if(xa>x1)   r=y-1+1;
    else if(xa<x1)  r=z-1+1;
    mx=max(xa,x1);      mn=min(x1,xa);
    cout<<mx<<endl;
    for(i=1;i<=mx;i++){
        if(i<=mn)cout<<y<<z<<endl;
        else if(i>mn)cout<<r<<endl;
    }
    return 0;
}
