#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int K,N,count=0;
		long int A,B;
		cin>>N>>A>>B>>K;
		for(long long int i=2;i<=N;i++)
		{
			if(!(i%A==0 && i%B==0))
			{
				if(i%A==0 || i%B==0)
					count++;
			}
		
		}	
		
		if(count>=K)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;		
	}
	
}
