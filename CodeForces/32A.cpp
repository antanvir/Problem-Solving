#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,d,a[10000],s=0,c=0;
    cin>>n>>d;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++){
         for(j=i+1;j<n;j++){
            //if(a[i]==a[j])  c++;
            if(abs(a[i]-a[j])<=d)   s+=2;
         }
    }
    cout<<s<<endl;
    return 0;
}
