#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("fuck.txt","w",stdout);
    string s,b="({<[";
    while(getline(cin,s)){
        int c=0; bool f=true;
        stack<char> st;
        for(int i=0; s[i]; i++){
            for(int j=0; b[j];j++){
                if( s[i]==b[j] &&!(s[i]=='(' && s[i+1]=='*') ){
                    st.push(s[i]);
                    //cout<<st.top()<<endl;
                }
            }
            if(s[i]=='(' && s[i+1]=='*'){ st.push('/'); s[i+1]='t'; c--;}
            else if(s[i]==')' && s[i-1]=='*'){
                   // cout<<"lol"<<endl;
                c--;
                if(!st.empty() &&st.top()=='/') st.pop();
                else { f=false; c+=i+1; break;}
            }

            else if(s[i]==')'){
                if(!st.empty() &&st.top()=='(') st.pop();
                else { f=false; c+=i+1; break;}
            }
            else if(s[i]=='}' ){
                if(!st.empty() &&st.top()=='{') st.pop();
                else { f=false; c+=i+1; break;}
            }
            else if(s[i]=='>' ){
                if(!st.empty() &&st.top()=='<') st.pop();
                else { f=false; c=i+1; break;}
            }
            else if(s[i]==']' ){
                if(!st.empty() &&st.top()=='[') st.pop();
                else { f=false; c+=i+1; break;}
            }
            //cout<<st.top()<<" "<<f<<" " ;
        }
        if(f &&!st.empty()){ f=false; c+=s.size()+1;}
        (!f) ?cout<<"NO "<<c<<endl :cout<<"YES\n" ;
    }
}
