#include<stdio.h>
#include<math.h>
int main(){
    long long int j,n,c=0,v;    int i,m=1,k=0;
    float r;
    scanf("%I64d",&n);
    for(i=0;i==i;i++){
       if(c<n){
            c+=5*pow(2,i);  k=i; //m*=2;
       }
       else break;
    }
  //  printf("\nk: %d\n",k);
   //  printf("c: %I64d\n",c);
    v=c-5*pow(2,k);
  //   printf("%I64d\n",v);
    r=(float)(n-v)/pow(2,k);
   // printf("r: %f\n",r);
    if(r>0 && r<=1) printf("Sheldon");
    else if(r>1 && r<=2) printf("Leonard");
    else if(r>2 && r<=3) printf("Penny");
    else if(r>3 && r<=4) printf("Rajesh");
    else if(r>4 && r<=5) printf("Howard");
    return 0;
}