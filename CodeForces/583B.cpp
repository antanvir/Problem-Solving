#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,inf=0,c=0,f=1,x=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
   while(inf<=n-1){
        c++;
        if(f){
             for(i=0;i<n;i++){
                if(a[i]!=-1 && a[i]<=inf){
                    a[i]=-1;
                    inf++;
                }
            }
            f=0;
        }
        else{
            for(i=n-1;i>=0;i--){
                if(a[i]!=-1 && a[i]<=inf){
                    a[i]=-1;
                    inf++;
                }
            }
            f=1;
        }
    }
    cout<<c-1<<endl;
    return 0;
}
