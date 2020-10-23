#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("rfp.txt","w",stdout);
    int r,p,req_met,cs=0;
    string s,s1;
    double tk;
    while(cin>>r>>p &&r&&p){
        if(cs)cout<<endl;
        getline(cin,s1);

        map<int,int> numOfComp;
        map<int, vector<string> > comp;
        map<string, double> price;
        int mx=0;
        while(r--){
            getline(cin,s1);
        }
        while(p--){
            //cin>>s>>tk>>req_met;
            getline(cin,s);
            cin>>tk>>req_met;
            getline(cin,s1);

            comp[req_met].push_back(s);
            price[s]=tk;
            numOfComp[req_met]++;
            mx=max(mx,req_met);

            while(req_met--){
               getline(cin,s1);
            }
        }
        cout<<"RFP #"<<++cs<<endl;
        if(numOfComp[mx]>1){
            string res=comp[mx][0];
            for(int i=1; i<comp[mx].size(); i++){
                if(price[comp[mx][i]] < price[res])res=comp[mx][i];
            }
            cout<<res<<endl;
        }
        else cout<<comp[mx][0]<<endl;
    }
    return 0;
}

