#include<iostream>
#include<cstring>
using namespace std;
int largestSubArray(string str)
{
	int sum=0,maxLength=-1;
	for(int i=0;i<str.length()-1;i++)
	{
		sum=(str[i]==0)?-1:1;
        
		for(int j=i+1;j<str.length();j++)
		{
			(str[j] == 0)? (sum += -1): (sum += 1); 
			if(sum==0 && maxLength<j-i+1)
				{
					maxLength=j-i+1;
					
				}
			
			
		}
		
		
		
	}
	
	
	return maxLength;	
	
}
int main()
{
	
	string s="100110100";
	printf("%d",largestSubArray(s));
	
	
	
	
	
	
	
	
	
}
