#include <stdio.h>
int main()
{
	int T,N,a[100],i; long product=1;
	scanf("%d",&T);
	while(T--)
	{	
		scanf("%d",&N);
		for(i=0;i<N-1;i++)
		{
			scanf("%d",&a[i]);
			product=product*a[i]%1234567;
		}
		printf("%ld\n",product);
		product=1;
		
	}
		
	return 0;
	
}
