#include<bits/stdc++.h>
using namespace std;
int main(){
    long i,j,n,r;
    cin>>n;
    r=n%7;
    if(r<=5)cout<<(n/7)*2<<' ';
    else if(r==6)cout<<(n/7)*2+1<<' ';
    
    if(r==0)cout<<(n/7)*2;
    else if(r==1)cout<<(n/7)*2+1;
    else if(r>=2)cout<<(n/7)*2+2;
    return 0;
}