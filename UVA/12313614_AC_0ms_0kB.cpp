#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int l=s.size()-1;
        if(s=="1"||s=="4"||s=="78")cout<<"+\n";
        else if(s[l]=='5'&&s[l-1]=='3') cout<<"-\n";
        else if(s[0]=='9'&&s[l]=='4') cout<<"*\n";
        else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0') cout<<"?\n";
    }
    return 0;
}
