#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, l,w,h,a=0;
    cin>>t;
    while(t--){
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20) cout<<"Case "<<++a<<": good"<<endl;
        else cout<<"Case "<<++a<<": bad"<<endl;
    }
    return 0;
}
