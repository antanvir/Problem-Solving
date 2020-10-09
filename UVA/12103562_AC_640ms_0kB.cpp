#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,cs=0;
    while(cin>>p){
        cout<<"Test Set #"<<++cs<<endl;
        int a;
        map< int , vector<int> > adj;
        for(int i=0; i<p;i++){
            cin>>a;
            adj[1].push_back(a);
            adj[a].push_back(1);
        }
        for(int j=2; j<=19; j++ ){
            cin>>p;
            for(int i=0; i<p;i++){
                cin>>a;
                adj[j].push_back(a);
                adj[a].push_back(j);
            }
        }
        int n,x,y;
        cin>>n;
        for(int i=0; i<n;i++){
            cin>>x>>y;
            map<int,int> dst;
            //cout<<x<<endl<<y<<endl;
            dst[x]=1;
            queue<int> Q;
            Q.push(x);
            while(!Q.empty()){
                int u=Q.front();
                Q.pop();
                if(u==y){
                    break;
                }
                for(int j=0; j<adj[u].size();j++){
                    int v=adj[u][j];
                    if(!dst[v]){
                        dst[v]=dst[u]+1;
                        Q.push(v);
                    }
                }
            }
            cout<<setw(2)<<x<<" to "<<setw(2)<<y<<": "<<dst[y]-dst[x]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
