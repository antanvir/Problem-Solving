#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,j,n,a[500][500],d1=0,d2=0,s[500],r,c[500],c_num,er,er_num=-1,f=1,fl=1;
    cin>>n;
    if(n!=1){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
                s[i]+=a[i][j];
                if(a[i][j]==0){  er_num=i; }
            }
            if(i!=er_num && f==1){  r=s[i]; f=0; }
            if(i==er_num){  er=s[i]; }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                c[i]+=a[j][i];
                if(a[j][i]==0){  c_num=i;  }
            }
        }
        for(i=0;i<n;i++){
            if(a[i][i]==0 || a[i][n-1-i]==0 )   fl=0;
            d1+=a[i][i];    d2+=a[i][n-1-i];
        }
        for(i=0;i<n;i++){
            if(i!=c_num && r!=c[i]) {   cout<<"-1";  return 0;  }
            if(i!=er_num && r!=s[i]) {   cout<<"-1";  return 0;  }
        }
        if(fl==1 && r==d1 && r==d2 && r-er>0){  cout<<r-er;   return 0;   }
        else if(fl==0 && r-er>0 && (    (r==d1 && er==d2)||(r==d2 && er==d1)    ))
                {  cout<<r-er;   return 0;   }
        else if(fl==0 && r-er>0 && d1==d2){  cout<<r-er;   return 0;   }
        else{  cout<<"-1";  return 0;  }
    }
    if(n==1)    cout<<"1";
    return 0;
}
