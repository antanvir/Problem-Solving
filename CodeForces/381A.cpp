#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,x,n,s=0,d=0,a[10000];
    cin>>n;
    for(x=0;x<n;x++)    cin>>a[x];
    i=0;    j=n-1;  k=1;
    while(k<=n){
        if(k%2){
            if(a[i]>a[j]){  s+=a[i];  i++;  }
            else{  s+=a[j];  j--;  }
        }
        else{
            if(a[i]>a[j]){  d+=a[i];  i++;  }
            else{  d+=a[j];  j--;  }
        }
        k++;
    }
    cout<<s<<' '<<d;
    return 0;
}
