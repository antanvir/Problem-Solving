#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n, a[3001],f=1,c=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){ a[j]+=1; c++; }
        }
    }
    cout<<c;
    return 0;
}
