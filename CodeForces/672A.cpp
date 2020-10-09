#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,c=9,s,r,num;
    cin>>n;
    if(1<=n && n<=9)    cout<<n;
    else{
        for(i=10;i<=n;i++){
            if(c<n && i<=99){ c+=2; num=i;  }
            else if(c<n && i<=999){ c+=3; num=i;  }
            else if(c<n && i<=9999){ c+=4; num=i;  }
            if(c>=n) break;
        }
        if(c==n){
            if(num<=99){ cout<< num%10;  }
            else if(num<=999){ cout<<num%10;   }
            else if(num<=9999){ cout<<num%10;   }
        }
        else if(c>n){
            if(num<=99){ cout<< num/10;  }
            else if(num<=999){
                s=c-n;
                if(s==2)    cout<<num/100;
                else if(s==1)    cout<<(num%100)/10;   
            }
            else if(num<=9999){
                s=c-n;
                if(s==3)    cout<<num/1000;
                else if(s==2)   cout<<(num%1000)/100;
                else if(s==1)   cout<<(num%100)/10;
            }
        }
    }
    return 0;
}
