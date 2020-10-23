#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c=0;
    while(getline(cin,s)){
        if(s=="*") return 0;
        if(s=="Hajj") cout<<"Case "<<++c<<": Hajj-e-Akbar"<<endl;
        else cout<<"Case "<<++c<<": Hajj-e-Asghar"<<endl;
    }
    return 0;
}
