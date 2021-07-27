#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d", (n+n%2)*(m+m%2)/4);
        
        
    
    return 0;
}

/* 			How to convert odd number to even    
					Just add n%2 to the number like i did in the problem above.


*/
