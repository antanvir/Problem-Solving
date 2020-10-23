#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,f=0;
    while(cin>>n>>m){
        if(!n && !m)    return 0;
        getchar();
        char a[n][m+1];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        //
       /*  for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }*/
        int na[n][m];
        memset(na, 0, sizeof(na));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               if(a[i][j]=='*'){
                    if(a[i-1][j] && a[i-1][j]=='.') na[i-1][j]++;
                    if(a[i-1][j-1] && a[i-1][j-1]=='.') na[i-1][j-1]++;
                    if(a[i-1][j+1] && a[i-1][j+1]=='.') na[i-1][j+1]++;


                    if(a[i][j-1] && a[i][j-1]=='.') na[i][j-1]++;
                    if(a[i][j+1] && a[i][j+1]=='.') na[i][j+1]++;

                    if(a[i+1][j-1] && a[i+1][j-1]=='.') na[i+1][j-1]++;
                    if(a[i+1][j] && a[i+1][j]=='.') na[i+1][j]++;
                    if(a[i+1][j+1] && a[i+1][j+1]=='.') na[i+1][j+1]++;
               }
            }
        }
        if(f)    cout<<endl;
        cout<<"Field #"<<++f<<":"<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]=='*') cout<<a[i][j];
                else  cout<<na[i][j];
            }
            cout<<endl;
        }
       // cout<<endl;
    }
    return 0;
}
