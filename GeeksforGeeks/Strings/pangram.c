#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[200];
	int i=0,j,mark[26],index;
	scanf("%s",&str);
	for(i=0;i<26;i++)
	{
		mark[i]=1;
	}
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			index=str[i]-'a';
			
		}
			
		else if(str[i]>='A' && str[i]<='Z')
		{
				index=str[i]-'z';
				
		}
		mark[index]=0;
		
		
		
	}
	
	for(j=0;j<26;j++)
	{
		if(mark[j]==1)
		{
			printf("not pangram");
		}
	
	

	}
	

	
	
	
	
	
	
	
	
	
}
