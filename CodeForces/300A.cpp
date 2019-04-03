#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,a[1000],b[100],c[100],d[100],x=0,y=0,p=0,q=0;
    cin>>n;
    while(n--){
        cin>>k;
        if(k<0){  a[p]=k;  p++;  x++;  }
        if(k>0){   b[q]=k;  q++; y++;  }
    }
    if(x%2==0){
        cout<<"1 "<<a[0]<<endl;
        (x>=4) ? cout<<y+2<<' '<<a[1]<<' '<<a[2] <<' '  : cout<<y<<' ';
        for(i=0;i<q;i++){
            cout<<b[i]<<' ';
        }
        (x>=4) ? cout<<endl<<x-2<<' '<<"0"<<' '  : cout<<endl<<x<<' '<<"0"<<' ';
        (x>=4) ? j=3 : j=1;
        for(i=j;i<p;i++){
            cout<<a[i]<<' ';
        }
    }
    else{
        cout<<"1 "<<a[0]<<endl;
        cout<<y+x-1<<' ';
        for(i=1;i<p;i++){
            cout<<a[i]<<' ';
        }
        for(i=0;i<q;i++){
            cout<<b[i]<<' ';
        }
        cout<<endl<<"1 0";
    }
    return 0;
}
