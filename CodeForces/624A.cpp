#include<bits/stdc++.h>
using namespace std;
int  main(){
    long i,j, d,l,v1,v2;
    double p;
    cin>>d>>l>>v1>>v2;
    p=(double)(l-d)/(v1+v2);
    printf("%.20lf",p);
    return 0;
}
