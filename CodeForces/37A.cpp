#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i,j,k,n,a[1000],max=1,c=1,b=1;
    cin>>n;
    //a[0]=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
 //  for(i=0;i<n;i++)
   //     cout<<a[i]<<" ";
    for(i=0;i<n;i++){
        if(a[i]!=a[i-1] && i>0)    b++;
     //   cout<<b<<endl;
        for(j=i+1;j<n;j++){
            if(a[j]==a[i])  c++;
            else break;
        }
        if(c>max){ max=c;   c=1;  }
        c=1;
    }
    cout<<max<<" "<<b;
    return 0;
}