#include<iostream>
using namespace std;
int checkPangram(string &str)
{	
    int index,length,mark[26],i;
    length=str.length();
    for(i=0;i<=25;i++)
	{
	    mark[i]=0;
	    
	}
	for(i=0;i<length;i++)
	{
	    if('a'<=str[i] && str[i]<='z')
	        index=str[i]-'a';
	    else if('A'<=str[i] && str[i]<='Z')
	        index=str[i]-'A';
	    mark[index]=1;
	    
	}
	for(i=0;i<=25;i++)
	{
	    if(mark[i]==0)
	        return 0;
	    
	}
	return 1;
}
int main() 
{
	//code
	
	

    int T;
    cin>>T;
    while(T--)
    {
        int result;
        string mystr;
	    cin>>mystr;
	    result=checkPangram(mystr);
	    cout<<result<<endl;
    }
return 0;
}
