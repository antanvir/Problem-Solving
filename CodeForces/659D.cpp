#include<bits/stdc++.h>
using namespace std;
int main(){
    int  i,j,k,n,a[10000][2],w,s,x=99999999,c=0;
    cin>>n;
    n++;
    while(n--){
        cin>>w>>s;
        if(x!=w){  c++;   x=w;  }
    }
    cout<<c-3<<endl;
    return 0;
}
