#include<bits/stdc++.h>
using namespace std;

queue<int> q;

int main(){
  // freopen("myfile.txt","w",stdout);

    int t, cs=0;
    while(cin>>t){
        if(!t) return 0;

        map< int, vector<int> > e;

        int a,b;
        for(int i=0; i<t; i++){
            cin>>a>>b;
            e[a].push_back(b);
           e[b].push_back(a);
        }
        int s,l;

        while(cin>>s>>l){
            if(!s && !l) break;
            int n=0;

            int c=0;

            map<int,bool> v;

           map <int,int>d;

           for(map< int, vector<int> >:: iterator it=e.begin(); it!=e.end(); it++){


              if((*it).first==s){
                    q.push(s);
                    v[s]=true;
                    d[s]=0;
                    break;
              }
           }
                    while(!q.empty()){
                        int f = q.front();
                        q.pop();

                        n++;
                        for(int i=0; i< e[f].size(); i++){
                            int z= e[f][i];
                            if(v[ z]==false){
                                    d[z]=d[f]+1;

                                    if(d[z] >l){
                                        c++;
                                    }
                                q.push( z );
                                v[ z]= true;

                            }
                        }

                    }

                c+= e.size()-v.size();
                cout<<"Case "<<++cs<<": "<<c<<" nodes not reachable from node "<<s<<" with TTL = "<<l<<".\n";

        }

    }
    return 0;
}
