#include<bits/stdc++.h>
using namespace std;

int main(){
    int in,fi,se,th;
    while(cin>>in>>fi>>se>>th){
        if(!in&&!fi&&!se&&!th)break;
        long long deg=2*360+360;
        (in>=fi) ?deg+=(in-fi)*9 :deg+=(in-fi+40)*9;
        (fi<=se) ?deg+=(se-fi)*9 :deg+=(se-fi+40)*9;
        (se>=th) ?deg+=(se-th)*9 :deg+=(se-th+40)*9;
        cout<<deg<<endl;
    }
    return 0;
}
