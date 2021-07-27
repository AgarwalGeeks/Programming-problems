#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,C;
		scanf("%d%d",&N,&C);
		int i=0;
		int sum=0;
		while(N--)
		{		
				int A;
				scanf("%d",&A);
				sum=sum+A;
		}
		if(C>=sum)
			printf("Yes\n");
		else
			printf("No\n");
		
		
		
		
		
	}
	
	
	
	return 0;
	
}
