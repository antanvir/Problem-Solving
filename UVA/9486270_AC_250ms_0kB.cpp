#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,n,m,r,s,x=0,y=0,l,mx=0;
   
   while(cin>>n>>m){
       
    if(n>=m){l=n; s=m;}
    else{ l=m; s=n; }
       
    for(i=s;i<=l;i++){
        k=i;
        while(k>1){
            if(k%2) k=3*k+1;
            else k=k/2;
            x++;
        }
        mx=max(mx,x+1);
        x=0; 
    }   
        cout<<n<<' '<<m<<' '<<mx<<endl;
       mx=0;
   }
    return 0;
}
