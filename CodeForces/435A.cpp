#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,m,a[1000],c=0,s=0,p;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
       
        if(s==m){  c++;  s=0; }
        else if(s>m){    c++;    s=a[i];  }
    }
    if(s!=0) cout<<c+1;
    else    cout<<c;
    return 0;
}
