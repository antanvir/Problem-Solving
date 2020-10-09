#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,k,a,b,x1=0,x2=0,x3=0,x4=0,x5=0,y1=0,y2=0,y3=0,y4=0,y5=0,s=0;
    cin>>n;
    k=n-1+1;
    while(n--){
        cin>>a;
        if(a==1)x1++;
        else if(a==2)x2++;
        else if(a==3)x3++;
        else if(a==4)x4++;
        else if(a==5)x5++;
    }
    while(k--){
        cin>>a;
        if(a==1)y1++;
        else if(a==2)y2++;
        else if(a==3)y3++;
        else if(a==4)y4++;
        else if(a==5)y5++;
    }
    if(abs(x1-y1)%2 ||abs(x2-y2)%2 ||abs(x3-y3)%2 ||abs(x4-y4)%2 ||abs(x5-y5)%2 ) cout<<"-1\n";
    else{
        if(x1-y1>0)s+=(x1-y1)/2;
        if(x2-y2>0)s+=(x2-y2)/2;
        if(x3-y3>0)s+=(x3-y3)/2;
        if(x4-y4>0)s+=(x4-y4)/2;
        if(x5-y5>0)s+=(x5-y5)/2;
        cout<<s<<endl;
    }
    return 0;
}
