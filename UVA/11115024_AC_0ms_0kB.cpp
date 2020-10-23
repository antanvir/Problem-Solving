#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0,tr;
    cin>>t;
    long  long a,b,s=0;
    while(t--){
        cin>>a>>b;
        if(!(a%2)) a++;
        if(!(b%2)) b--;
        tr=(b-a)/2 +1;
        //cout<<tr<<" ";
        cout<<"Case "<<++c<<": "<< (tr*(2*a + (tr-1)*2))/2<<endl;
    }
    return 0;
}

