#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,j,c=0,n,a[200000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        c+=abs(a[i]-a[i-1]);
       // cout<<c<<endl;
    }
    cout<<c+abs(a[0]);
    return 0; 
}
