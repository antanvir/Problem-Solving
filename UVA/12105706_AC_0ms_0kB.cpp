#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("Nets.txt","w",stdout);
    int n;
    while(cin>>n){
        string s;
        getline(cin,s);
        map< int, vector<int> > adj;
        for(int i=0; i<n; i++){
            getline(cin,s);
            stringstream ss;
            ss<<s;
            char fl;
            int ch,a;
            ss>>a;
           // int c=1;
            while(ss>>fl>>ch){
              //  if(c%2){
                    //cout<<a<<"\t"<<ch<<endl;
                    adj[a].push_back(ch);
                //}
                //++c;
            }

        }
        int m,sp,ep;
        cin>>m;
        cout<<"-----\n";
        for(int i=0; i<m; i++){
            cin>>sp>>ep;
            map<int ,bool> vis;
            map<int,int> par;
            //map<int,int> w;
            //memset(w,1000000,sizeof(w));
            queue<int> q;
            vis[sp]=true;
            par[sp]=sp;
            q.push(sp);

            while(!q.empty()){
                int u=q.front();
                q.pop();
                if(u==ep){
                    break;
                }
                for(int j=0; j<adj[u].size();j++){
                    int v=adj[u][j];
                    if(!vis[v]){
                        vis[v]=true;
                        par[v]=u;
                        q.push(v);
                    }
                }
            }
            if(!vis[ep]) cout<<"connection impossible\n";
            else{
                vector<int> path;
                int node=ep;
                while(par[node]!=node){
                    path.push_back(node);
                    node=par[node];
                }
                path.push_back(node);
                reverse(path.begin(),path.end());
                cout<<path[0];
                for(int k=1; k<path.size();k++){
                    cout<<" "<<path[k];
                }
                cout<<endl;
            }

        }

    }
    return 0;
}
