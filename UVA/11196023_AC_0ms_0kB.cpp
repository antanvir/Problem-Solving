#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(!n)  return 0;
        double d[n], tot=0.0;
        for(int i=0; i<n; i++){
            cin>>d[i];      tot+=d[i];
        }
        tot=tot/n;
       // cout<<tot<<endl;
        double exc=0.0,ep=0.0;
        for(int i=0; i<n; i++){
            if(d[i]<tot)   exc+= (int)((tot-d[i])*100.0)/100.0;
            else ep+= (int)((d[i]-tot)*100.0)/100.0;
        }
        cout<<"$"<<fixed<<setprecision(2)<<max(exc,ep)<<endl;
    }
    return 0;
}
