#include<bits/stdc++.h>
using namespace std;
int main(){
    long i,j,c=0,n,p=0;
    char a[100002],b[100002],x[100002];
    cin>>a>>b;
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            c++;
            if(p%2){  x[p]=b[i]; p++;  }
            else{  x[p]=a[i];   p++;     }
        }
    }
    p=0;
    if(c%2) cout<<"impossible"<<endl;
    else{
        for(i=0;i<n;i++){
            if(a[i]==b[i]) cout<<a[i];
            else{ cout<<x[p];  p++; }
        }
    }
    return 0;
}
