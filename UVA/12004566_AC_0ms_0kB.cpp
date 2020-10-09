#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("file.txt","w",stdout);
    int t, m,n,p,cs=0;
    cin>>t;
    for(int x=1; x<=t; x++){
        cin>>m>>n>>p;
        map< string, vector<string> > e;
        string s,a,b;
        while(m--){
            cin>>s;
            //e.push_back(s);
        }
        while(n--){
           cin>>a>>b;
           e[a].push_back(b);
           e[b].push_back(a);
        }
        if(x==1) cout<<"SHIPPING ROUTES OUTPUT"<<endl;
        cout<<"\nDATA SET  "<<x<<endl<<endl;
        int l;
        string u,v;
        for(int j=1; j<=p; j++){
            cin>>l>>u>>v;
            bool flag =false;
            map< string, int > d;
            queue <string> q;
            q.push(u);
            d[u]=1;
            while(!q.empty()){
                string f= q.front();
                q.pop();
                for(int i=0; i<e[f].size(); i++){
                    string z=e[f][i];
                    if(d[z]==0){

                        d[z] = d[f]+1;
                      //  cout<<z<<"="<<d[z]<<endl;
                        if(z==v){
                            flag=true;
                            break;
                        }
                        q.push(z);
                    }
                }
                if(flag) break;
            }
           // cout<<l<<"   "<<d[v]-d[u]<<"   "<<100<<endl;
            (flag) ? cout<<"$"<<l*(d[v]-d[u])*100<<endl  : cout<<"NO SHIPMENT POSSIBLE"<<endl;
            if(x==t && j==p) cout<<"\nEND OF OUTPUT"<<endl;
        }
    }
    return 0;
}
