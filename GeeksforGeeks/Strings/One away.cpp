#include<iostream>
using namespace std;
bool isOneAway(string s1,string s2)
{
	int n1=s1.length(),n2=s2.length();
	if(abs(n1-n2)>1) return false;
	
	    int i=0,j=0,count=0;
	    while(i<n1 && j<n2)
	    {
	    	if(s1[i]==s2[j])
	    	{
	    		i++;
	    		j++;
			}
			else if(n1==n2)
			{
				count++;
				i++;
				j++;
				
			}
			else if(n1>n2)
			{i++;
			count++;
			}
			else {
			j++;
			count++;}
	    	if(count>1)
	    		return false;
	    	
	    	
		}
		return true;
		
		
		
		
		
	
	
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
string s1,s2;
cin>>s1>>s2;
cout<<isOneAway(s1,s2)<<endl;
}
	
	
	
	
	
}
