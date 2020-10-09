#include<bits/stdc++.h>
using namespace std;
int main(){
    long i,j,n,m,a[100],c=0,s=0;
    cin>>n>>m;
    for(i=0;i<n;i++)    cin>>a[i];
    sort(a,a+n);
    for(i=n-1;i>=0;i--){
        s+=a[i];
        if(s<m) c++;
        if(s>=m){ c++; break; }
    }
    cout<<c;
    return 0;
}
