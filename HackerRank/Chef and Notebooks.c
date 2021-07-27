#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int X,Y,K,N,count=0;
		scanf("%ld%ld%ld%ld",&X,&Y,&K,&N);
		while(N--)
		{
			int p,c;
			scanf("%d%d",&p,&c);
			if(p>=(X-Y) && c<=K)
				{
					count=1;
					
				}
		
		}
		
		if(count==1)
			printf("LuckyChef\n");
		else
			printf("UnluckyChef\n");
		
		
	}
	
	
	
	
	
}
