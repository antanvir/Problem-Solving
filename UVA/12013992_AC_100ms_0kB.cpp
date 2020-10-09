#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string,int> w1,w2,w3,w4,w5;
    int c=0;
    string  ant ="abcdefghijklmnopqrstuvwxyz" , oh ;

    for(int i=0; i<ant.size(); i++){
        c++;
        stringstream ss;
        ss<<ant[i];
        ss>>oh;
        //cout<<oh<<endl;
        w1[oh]=c;
    }
    /*for(map< string, int> :: iterator i =w1.begin(); i!=w1.end(); i++){
        map< string, int> :: iterator it =w1.begin();
        advance(it,1);
        for(it ; it!=w1.end(); it++){
            oh = i->first +  it->first;
           // oh = strcat(i->first, it->first);
            c++;
            w2[oh]=c;
        }
    }*/
    for(int i=0; i<ant.size(); i++){
        for(int j=i+1; j<ant.size(); j++){
            c++;
            stringstream ss;
            ss<<ant[i];     ss<<ant[j];
            ss>>oh;

            w2[oh]=c;
        }
    }
     for(int i=0; i<ant.size(); i++){
        for(int j=i+1; j<ant.size(); j++){
             for(int k=j+1; k<ant.size(); k++){
                c++;
                //oh= ant[i]+ant[j]+ant[k];
                 stringstream ss;
                ss<<ant[i];    ss<<ant[j];    ss<<ant[k];
                ss>>oh;

              //  cout<<oh<<endl;
                w3[oh]=c;
            }
        }
     }
    for(int i=0; i<ant.size(); i++){
        for(int j=i+1; j<ant.size(); j++){
            for(int k=j+1; k<ant.size(); k++){
                for(int l=k+1; l<ant.size(); l++){
                    c++;
                        //oh= ant[i]+ant[j]+ant[k];
                    stringstream ss;
                    ss<<ant[i];   ss<<ant[j];  ss<<ant[k];   ss<<ant[l];
                    ss>>oh;

                    //cout<<oh<<endl;
                    w4[oh]=c;

                }
            }
        }
     }
    for(int i=0; i<ant.size(); i++){
        for(int j=i+1; j<ant.size(); j++){
            for(int k=j+1; k<ant.size(); k++){
                for(int l=k+1; l<ant.size(); l++){
                    for(int m=l+1; m<ant.size(); m++){

                        c++;
                            //oh= ant[i]+ant[j]+ant[k];
                        stringstream ss;
                        ss<<ant[i];   ss<<ant[j];  ss<<ant[k];
                        ss<<ant[l];    ss<<ant[m];
                        ss>>oh;

                        //cout<<oh<<endl;
                        w5[oh]=c;

                    }
                }
            }
        }
     }
    /*
     for(map< string, int> :: iterator it =w5.begin(); it!=w5.end(); it++){
        cout<<it->first<<" = "<<w5[it->first]<<endl;
    }
    */
    while(cin>>oh){
        int z = oh.length();
        map<string,int> res;
        bool flag=false;
        if(z==1){
            flag=true;  res=w1;
        }
        else if(z==2){
            if(oh[0]<oh[1]){
                flag=true;
                res = w2;
            }
        }
        else if(z==3){
            if(oh[0]<oh[1] && oh[1]<oh[2]){
                flag=true;
                res = w3;
            }
        }
        else if(z==4){
            if(oh[0]<oh[1] && oh[1]<oh[2] && oh[2]<oh[3]){
                flag=true;
                res = w4;
            }
        }
        else if(z==5){
            if(oh[0]<oh[1] && oh[1]<oh[2] && oh[2]<oh[3] && oh[3]<oh[4]){
                flag=true;
                res = w5;
            }
        }

        if(!flag) cout<<0<<endl;
        else{
            for(map< string, int> :: iterator it =res.begin(); it!=res.end(); it++){
                if(oh==it->first)
                    cout<<res[it->first]<<endl;
            }
        }
    }
    return 0;
}
