#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  i,j,t,s,x,f=0;
    cin>>t>>s>>x;
    if(x==0 && t==0)cout<<"YES";
    else{
        for(i=1; i<=(x-t)/s+1 ;i++){
            if(x==t || x==t+i*s || x==t+i*s+1){  f=1; break;  }
        }
        if(f)cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}
