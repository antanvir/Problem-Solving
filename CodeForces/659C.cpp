#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,m,c=0,p=0,s=0,q=0;
    cin>>n>>m;
    int a[n],b[100000];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=1;i<=1000000000;i++){
        if(a[p]==i){  p++;  }
        else{
            s+=i;
            if(s>m){  s-=i;   break;   }
            else{
                c++;    b[q]=i;   q++;
            }
        }
    }
    cout<<c<<endl;
    for(i=0;i<q;i++){
        cout<<b[i]<<' ';
    }
    return 0;
}
