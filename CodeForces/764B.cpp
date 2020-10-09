#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,j,k,n,t;
    cin>>n;
    long long a[n+1];
    //a[0]=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
     for(i=0;i<=n/2+1;i++){
         j=i+1;
        if(j<=n-j+1 && j%2){ t=a[i];  a[i]=a[n-i-1]; a[n-i-1]=t;  }
        // break;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}
