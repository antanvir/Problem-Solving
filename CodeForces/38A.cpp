#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,a,b,v[101],s=0;
    v[0]=0;
    cin>>n;
    for(i=1;i<=n-1;i++)
        cin>>v[i];
    cin>>a>>b;
    for(i=a;i<b;i++){
        s+=v[i];
    }
    cout<<s;
    return 0;
}
