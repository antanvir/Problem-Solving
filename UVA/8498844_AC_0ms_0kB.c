#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, p, q, s = 0;

    for( ; ; ){
        char a[33];
        scanf("%s", &a);
        n = strlen(a);
        if(a[0] == '0') break;

        s = 0;

        for( i = 0 ; i < n ; i++ )
	    s += (a[i]-48);

        do{
	    p = s % 10;
	    q = s / 10;
	    s= p + q;
        }while(s > 9);
        printf("%d\n", s);
    }
    return 0;
}
