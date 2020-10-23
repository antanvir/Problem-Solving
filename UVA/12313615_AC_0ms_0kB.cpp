#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,cs=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n; int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int hj=0,lj=0;
        for(int i=1; i<n; i++){
            if(a[i]>a[i-1]) hj++;
            else if(a[i]<a[i-1]) lj++;
        }
        cout<<"Case "<<++cs<<": "<<hj<<" "<<lj<<endl;
    }
    return 0;
}
