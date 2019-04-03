#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,s=0,n,a[10000],c=0,d=0;
    char x[10002];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        if(a[i]==0) c++;
        else if(s%9==0) d++;
    }
    for(i=0;i<d*9;i++) x[i]='5';
    for(i=d*9;i<d*9+c ;i++)   x[i]='0';
    if(c==0)    cout<<"-1";
    else if(d==0)   cout<<"0";
    else cout<<x;
    
    return 0;    
}
