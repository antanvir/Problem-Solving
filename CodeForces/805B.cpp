#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,a,b,c,d,l,p=0;
    char x[]="aabb";
    cin>>a;
    for(i=0;i<a;i++){
        cout<<x[i];
        if(i==3){ a=a-(1+i);  i=-1; }
    }
    cout<<endl;
    return 0;

}
