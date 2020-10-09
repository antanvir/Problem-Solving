#include<bits/stdc++.h>
using namespace std;

int main(){
    string col, row;
    col="abcdefgh"; row="12345678";
    map< string, vector<string> > adj;
    for(int i=0; i<col.size(); i++){
        for(int j=0; j<row.size(); j++){
            string s="",ul="",ur="",dl="",dr="";
            string lu="",ld="",ru="",rd="";
            s=s+col[i]+row[j];
            if((row[j-1])>='1'){
                if((col[i-2])>='a'){ ul=ul+col[i-2]+row[j-1]; adj[s].push_back(ul);}
                if((col[i+2])<='h'){ur=ur+col[i+2]+row[j-1]; adj[s].push_back(ur);}
            }
            if((row[j+1])<='8'){
                if((col[i-2])>='a'){ dl=dl+col[i-2]+row[j+1]; adj[s].push_back(dl);}
                if((col[i+2])<='h'){dr=dr+col[i+2]+row[j+1]; adj[s].push_back(dr);}
            }
            if((col[i-1])>='a'){
                if((row[j-2])>='1'){ lu=lu+col[i-1]+row[j-2]; adj[s].push_back(lu);}
                if((row[j+2])<='8'){ ld=ld+col[i-1]+row[j+2]; adj[s].push_back(ld);}
            }
            if((col[i+1])<='h'){
                if((row[j-2])>='1'){ ru=ru+col[i+1]+row[j-2]; adj[s].push_back(ru);}
                if((row[j+2])<='8'){ rd=rd+col[i+1]+row[j+2]; adj[s].push_back(rd);}
            }
            //cout<<s<<"\t"<<ul<<","<<ur<<","<<dl<<","<<dr<<","
                   // <<lu<<","<<ld<<","<<ru<<","<<rd<<","<<endl;
        }
    }
    string x,y;
    while(cin>>x>>y){
        map< string, int> dist;
        dist[x]=1;
        queue <string> q;
        q.push(x);
        bool flag=false;
        while(!q.empty()){
            string u=q.front();
            q.pop();
            for(int i=0; i<adj[u].size();i++){
                string v= adj[u][i];
                if(dist[v]==0){
                    dist[v]=dist[u]+1;
                    q.push(v);
                   // cout<<v<<" = "<<dist[v]<<endl;
                    if(v==y){ flag=true; break;}
                }
            }
            if(flag) break;
        }
        cout<<"To get from "<<x<<" to "<<y<<" takes "<<dist[y]-dist[x]<<" knight moves.\n";
    }
    return 0;
}
