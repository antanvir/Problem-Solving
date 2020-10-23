#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        long long a=0;
        if(!n) return 0;
        for(int i=n; i>=1; i--){
            a+=i*i;
        }
        cout<<a<<endl;
    }
    return 0;
}
