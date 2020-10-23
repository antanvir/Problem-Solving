#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,cs=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n; int a[n],x;
        double m=0.0,j=0.0;
        for(int i=0; i<n; i++){
            cin>>x; x++;
            m+= ceil(x/30.0)*10.0;
            j+=ceil(x/60.0)*15.0;
        }
        if(m<j) cout<<"Case "<<++cs<<": "<<"Mile "<<m<<endl;
        else if(j<m) cout<<"Case "<<++cs<<": "<<"Juice "<<j<<endl;
        else cout<<"Case "<<++cs<<": "<<"Mile Juice "<<m<<endl;
    }
    return 0;
}
