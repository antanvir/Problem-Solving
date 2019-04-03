#include<stdio.h>
#include<string.h>

int main(){
	int j=0,i,k=0,n;
	char a[4];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",a);
		if((strcmp(a,"++X")==0) ||(strcmp(a,"X++")==0)) k++;
		else if((strcmp(a,"--X")==0) ||(strcmp(a,"X--")==0)) j++;	
	}
	printf("%d",k-j);
	return 0;

}