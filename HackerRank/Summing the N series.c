#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {	long long int n;
    	scanf("%lld",&n);
    	n=n%1000000007;
    	printf("%d\n",(n*n)%1000000007);
	}
    
    
}

/*
Theorem on modulation:
	(n*n)%p =  ( (n%p) * (n%p) ) % p
	
Integer Range follows as 
	int < long int < long long int
	
*/
