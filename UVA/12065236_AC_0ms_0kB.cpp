#include<bits/stdc++.h>
using namespace std;

struct pos{
    int l,r,c;
};

int main(){
    int x,y,z;
    char ch;
    pos s,e;
    int vis[32][32][32];

    int dl[]={0,0,0,0,-1,1};
    int dr[]={0,0,-1,1,0,0};
    int dc[]={-1,1,0,0,0,0};

    while(cin>>x>>y>>z &&x &&y &&z){
        memset(vis, -1, sizeof(vis));

        vector< vector< vector<char> > > dung;
        for(int i=0; i<x; i++){
            vector< vector<char> > level;

            for(int j=0; j<y; j++){
                vector<char> row;

                for(int k=0; k<z; k++){
                    cin>>ch;
                    if(ch=='S'){ s.l=i; s.r=j; s.c=k;  }
                    else if(ch=='E'){ e.l=i; e.r=j; e.c=k; }
                    row.push_back(ch);
                }
                level.push_back(row);
            }
            dung.push_back(level);
        }
        bool fl=false;
        int ans;
        queue<pos> q;
        q.push(s);
        vis[s.l][s.r][s.c]=0;

        while(!q.empty()){
            pos u = q.front();
            q.pop();
           // cout<<"u = "<<dung[u.l][u.r][u.c]<<"\t"<<u.l<<"\t"<<u.r<<"\t"<<u.c<<endl;
            if(e.l==u.l &&e.r==u.r &&e.c==u.c){
                fl=true;
                ans = vis[u.l][u.r][u.c];   break;
            }
            for(int i=0; i<6; i++){
               int nl,nr,nc;
               nl=u.l+dl[i]; nr=u.r+dr[i];  nc=u.c+dc[i];

                    //cout<<"ENTERED\n";
                    //cout<<"v = "<<dung[nl][nr][nc]<<"\t"<<nl<<"\t"<<nr<<"\t"<<nc<<endl;

               if((nl>=0 &&nl<x) && (nr>=0 &&nr<y) && (nc>=0 &&nc<z) && vis[nl][nr][nc]==-1
                   && (dung[nl][nr][nc]=='.' || dung[nl][nr][nc]=='E' )){

                   // cout<<"\nentered\n";
                    vis[nl][nr][nc]=vis[u.l][u.r][u.c] + 1;
                    pos v ;
                    v.l=nl;     v.r=nr;     v.c=nc;
                    q.push(v);
                  }
            }
        }
        (!fl) ? cout<<"Trapped!\n" : cout<<"Escaped in "<<ans<<" minute(s).\n";
    }
    return 0;
}
