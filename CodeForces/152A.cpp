#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,c=0;
    char a[100][101],mx[100];
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=0;i<m;i++){
        mx[i]=a[0][i]; 
        for(j=1;j<n;j++){
            if(a[j][i]>=mx[i]){ mx[i]=a[j][i];  }
        }
       
    }
     cout<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(mx[j]==a[i][j]){ c++; break; }
           
        }
        
    }
    cout<<c;
    return 0;
}
