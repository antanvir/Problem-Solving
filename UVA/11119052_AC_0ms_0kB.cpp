#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t=0;
    while(cin>>n){
        if(n<0) return 0;
        int c=0,p=1;
        while(p<n){
            c++;    p*=2;
        }
        cout<<"Case "<<++t<<": "<<c<<endl;
    }
    return 0;
}
