#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    while(cin>>n){
        if(n<0) return 0;
        long long sum=0;
        for(int i=1; i<=n; i++){
            sum+=i;
        }
        cout<<++sum<<endl;
    }
    return 0;
}

