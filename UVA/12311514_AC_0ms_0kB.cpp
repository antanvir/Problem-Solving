#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s && s!="0"){
        while(s.size()>1){
            int a=0;
            for(int i=0;s[i];i++){
                a+=s[i]-48;
            }
            stringstream ss;  ss<<a;
            ss>>s;
        }
        cout<<s<<endl;
    }
    return 0;
}
