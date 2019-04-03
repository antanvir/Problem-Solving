#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,i,j,x,y,k,p,q,s=0,t,ax,ay;
    cin>>n>>m>>x>>y>>k;
    for(i=0;i<k;i++){
        cin>>p>>q;
       if(p>0)   ax=(n-x)/p;
        else if(p<0)    ax=(x-1)/abs(p);
        else    ax=1000000000000000000;
        
        if(q>0)   ay=(m-y)/q;
        else if(q<0)    ay=(y-1)/abs(q);
        else    ay=1000000000000000000;    
        t=min(ax,ay);
       // cout<<ax<<' '<<ay<<endl;;
       // cout<<t<<endl;
        s+=t;
       if(t>0) x+=p*t;   y+=q*t;
    }
    cout<<s;
    return 0;
}
