#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,a,b,c,d,l,p=0;
    char x[12],y[12],r[12],s[12],str[12],t[12];
    cin>>x>>y;
    d=atoi(x)+atoi(y);
    for(i=0;i<strlen(x);i++){
        if(x[i]!='0'){ r[p]=x[i]; p++; }
    }
    p=0;
    for(i=0;i<strlen(y);i++){
        if(y[i]!='0'){ s[p]=y[i]; p++; }
    }
    itoa(d,str,10);
    //cout<<d<<' '<<str<<endl;
    p=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]!='0'){ t[p]=str[i]; p++; }
    }
    a=atoi(r);    b=atoi(s);
    c=atoi(t);
    l=a+b;
    //cout<<a<<' '<<b<<' '<<c<<' '<<l<<endl;
    if(l==c)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
