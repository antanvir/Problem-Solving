#include<bits/stdc++.h>
using namespace std;
int main(){
   // int n;
    double n,p;
    while(cin>>n>>p){
        double x= pow(p,1.0/n);
        cout<<fixed<<setprecision(0)<<x<<endl;
    }
    return 0;
}
