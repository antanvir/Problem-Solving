#include<bits/stdc++.h>
using namespace std;

int main(){
   // freopen("word.txt","w",stdout);
    int t;
    cin>>t;
    //getchar();
    while(t--){
        string s;
        vector<string> w;
       // getline(cin,s);
        while(cin>>s && s!="*"){
            //if(s=="*") break;
            w.push_back(s);
        }
        string x,y,line;
        getline(cin,line);
        while(getline(cin,line) && line!=""){
          //  if(line=="") break;
            stringstream ss(line);
            ss>>x>>y;
           // cout<<"x="<<x<<"\ty="<<y<<endl;
            map < string, int> tf;
            queue <string> q;
            q.push(x);
            tf[x]=1;
            bool flag=false;
            while(!q.empty()){
                string u=q.front();
                q.pop();
                for(int i=0; i<w.size();i++){
                    string v=w[i];
                    if(u.length()==v.length()){
                        int c=0;
                        for(int j=0; j<u.length();j++){
                            if(u[j]!=v[j]) c++;
                        }
                        if(c==1 && tf[v]==0){
                            tf[v]=tf[u]+1;
                          //  cout<<v<<"\t"<<tf[v]<<endl;
                            q.push(v);
                            if(v==y) flag= true;
                        }
                    }
                    if(flag) break;
                }
                if(flag) break;
            }
            cout<<x<<" "<<y<<" "<<tf[y]-tf[x]<<endl;
        }
        if(t) cout<<endl;
    }
    return 0;
}
