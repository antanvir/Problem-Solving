#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,i,f,t,mx=-1000000000000000;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>f>>t;
        if(t<=k) mx=max(mx,f);
        else mx=max(mx,f-(t-k));
    }
    cout<<mx;
    return 0;
}
