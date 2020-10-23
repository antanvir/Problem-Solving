#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b,h,w;
    while(cin>>n>>b>>h>>w){
        int p,a[w],mn=50000000;
        while(h--){
            cin>>p;
            for(int i=0;i<w;i++){
                cin>>a[i];
                if(a[i]>=n && n*p<=b){
                    mn=min(n*p,mn);
                    //break;
                }
            }
        }
        mn<=b ?cout<<mn<<endl :cout<<"stay home"<<endl;
    }
    return 0;
}
