#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int ar[n],ans[2],m;
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        cin>>m;
        sort(ar,ar+n);
        long long mins=11000000000000;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if((ar[i]+ar[j]==m) && ( abs(ar[i]-ar[j])<mins )){
                        ans[0]=ar[i]; ans[1]=ar[j];
                        mins=abs(ar[i]-ar[j]);
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<ans[0]<<" and "<<ans[1]<<"."<<endl<<endl;
    }
    return 0;
}
