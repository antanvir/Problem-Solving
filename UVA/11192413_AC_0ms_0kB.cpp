#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[10];
        memset(a, 0, sizeof(a));
        for(int i=1; i<=n; i++){
            if(i>=10){
                int r=i;
                while(r){
                    a[r%10]++;
                    r/=10;
                }
            }
            else    a[i%10]++;
        }
        for(int i=0; i<9; i++){
            cout<<a[i]<<" ";
        }
        cout<<a[9]<<endl;
    }
    return 0;
}
