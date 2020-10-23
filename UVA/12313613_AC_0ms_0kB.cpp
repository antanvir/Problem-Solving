#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cs=0;
    while(cin>>n &&n){
        int p=0,z=0,x;
        while(n--){
            cin>>x;
            x ?p++ :z++;
        }
        cout<<"Case "<<++cs<<": "<<p-z<<endl;
    }
    return 0;
}
