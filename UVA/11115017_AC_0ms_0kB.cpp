#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c=1;
    while(getline(cin,s)){
        for(int i=0; i<s.size(); i++){
            if(c%2 && s[i]=='"'){  c++;  cout<<"``";  }
            else  if(!(c%2) && s[i]=='"'){  c++;  cout<<"''";  }
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
