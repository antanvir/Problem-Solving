#include<bits/stdc++.h>
using namespace std;

int main(){
    //int h,d,n;
    double h,d,n,f;
    while(cin>>h>>d>>n>>f && h){
        double t=0.0,cl;
        f=f*d/100;
        for(int i=0; ;i++ ){
            d-i*f<0 ?cl=0.0 :cl=d-i*f;
            t+=cl;
            //cout<<t<<endl;
            if(t>h){ cout<<"success on day "<<i+1<<endl; break;}
            t-=n;
            if(t<0.0){ cout<<"failure on day "<<i+1<<endl; break;}
            //if(t<=0.0){ cout<<"failure on day "<<i+2<<endl; break;}
        }
    }
    return 0;
}
