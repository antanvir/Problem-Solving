#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,osthir;
    int t;
    long long a=0;
    int am;
    cin>>t;
    getline(cin,s);
    while(t--){
        getline(cin,osthir);
        if(osthir!="report"){
            stringstream ss(osthir);
            ss>>s;  ss>>am;
          //  cout<<am<<endl;
            a+=am;
        }
        else cout<<a<<endl;
    }
    return 0;
}
