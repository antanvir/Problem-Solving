#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(!n) return 0;
        int ans=0;
        while( n>=3){
            ans++;      n-=2;
        }
        (n==2) ? cout<<++ans<<endl : cout<<ans<<endl;
    }
    return 0;
}

