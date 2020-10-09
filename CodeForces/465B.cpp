#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,j,k,f=0,g=0,x=0,n,t,c,a,p=0,y=0;
    cin>>n;
    while(n--){
        cin>>a;
        if(a){  x++; f=1;  }
        if(f && a==0){ p++; }
        if( a && p>=1){ y++;  p=0;  }
    }
    //cout<<x<<' '<<y<<endl;
    cout<<x+y<<endl;
    return 0;
}
