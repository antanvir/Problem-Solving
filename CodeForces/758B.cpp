#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,ar=-1,ab=-1,ay=-1,ag=-1,r=0,b=0,y=0,g=0;
    char x[200];
    cin>>x;
    for(i=0;i<strlen(x);i++){
        if(x[i]=='R' && ar==-1)ar=i;
        else if(x[i]=='B' && ab==-1)ab=i;
        else if(x[i]=='Y' && ay==-1)ay=i;
        else if(x[i]=='G' && ag==-1)ag=i;
    }
    while(ar>3){
        ar=ar-4;
    }
    while(ab>3){
        ab=ab-4;
    }while(ay>3){
        ay=ay-4;
    }while(ag>3){
        ag=ag-4;
    }
     for(i=0;i<strlen(x);i++){
        if(x[i]=='!'){
            if(i%4==ar || ar==-1)r++;
            else if(i%4==ab  || ab==-1)b++;
            else if(i%4==ay  || ay==-1)y++;
            else if(i%4==ag  || ag==-1)g++;
        }
     }
     cout<<r<<' '<<b<<' '<<y<<' '<<g<<endl;
     return 0;
}
