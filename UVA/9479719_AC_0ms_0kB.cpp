#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    while(cin>>n){
        for(i=1;i<=n;i++){
            if(i%3==0)n++;
        }
        j=n%3;
        if(j==2)cout<<n+1<<endl;
        else cout<<n<<endl;
    }
    return 0;
}