#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0;
    cin>>n;
    string fl;
    //getline(cin,fl);
    while(n--){
        int y,y1,m,m1,d,d1,wow,day,month;
        string s, s1;
        stringstream ss,ss1;
        char t;

        //getline(cin,s);  getline(cin,s1);

       // ss<<s;  ss1<<s1;
        cin>>d>>t>>m>>t>>y;    cin>>d1>>t>>m1>>t>>y1;

         wow=y-y1;
         if((m<m1) || (m==m1 && d<d1)) wow--;

         if(wow<0)  cout<<"Case #"<<++a<<": Invalid birth date"<<endl;
         else if(wow>130) cout<<"Case #"<<++a<<": Check birth date"<<endl;
         else cout<<"Case #"<<++a<<": "<<wow<<endl;
    }
    return 0;
}

