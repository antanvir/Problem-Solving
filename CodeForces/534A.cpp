#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    if(n==2){  cout<<"1\n1";   }
    else if(n==3){  cout<<"2\n1 3" ;   }
    else{
        cout<<n<<endl;
        for(i=n;i>0;i--){
            if(i%2){   cout<<i<<"   ";     }
        }
         for(i=n;i>0;i--){
            if(i%2==0){   cout<<i<<"   ";     }
        }
    }
    return 0;
}
