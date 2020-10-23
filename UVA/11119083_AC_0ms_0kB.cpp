#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    while(cin>>n){
        if(!n)  return 0;
        int s=0,r,p;
        r=n%10; n=n/10; s+=r;
        while(n!=0){
           r=n%10; n=n/10; s+=r;
           if(!n && (s/10)){  n=s;  s=0;  }
           //cout<<s<<" ";
        }
        cout<<s<<endl;
    }
    return 0;
}
