#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        int fl=1,c=0;
        for(int i=0; i<12; i++){
            for(int j=0; j<60; j++){
                double hrs ;
                if(j%12==0) hrs=30.0*i+ 0.5*j;
                else hrs=30.0*i;
                double d=abs(hrs-(6.0*j));
                if(d>180.0)d=360.0-d;
            //cout<<"i: "<<i<<"j: "<<j<<endl;
                if(d==(double)a){
                    cout<<"Y"<<endl;
                    fl=0; break;
                //c++;
                 }
            }
            if(!fl)break;
        }
        if(fl)  cout<<"N"<<endl;
       /* cout<<"c: "<<c<<endl;
        if(c>=2)    cout<<"Y"<<endl;
        else    cout<<"N"<<endl;
            */
    }
    return 0;
}
