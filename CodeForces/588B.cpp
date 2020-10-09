#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,j,n,r;
    cin>>n;
    for(i=2;i<=sqrt(n)+1;i++){
        if(n%(i*i)==0){
            r=n/(i*i);
            n=r*i;
            i=1;
        }
    }
    cout<<n;
    return 0;
}
