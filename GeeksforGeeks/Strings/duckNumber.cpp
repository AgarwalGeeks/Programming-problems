#include<iostream>
using namespace std;
bool isDuck(string number)
{
	if(number[0]=='0')
		return false;
	if(number[0]!='0')
	{
		for(int i=1;i<number.length();i++)
		{
			if(number[i]=='0')
				return true;
			
		}
		return false;
	}
	
}
int main()
{
	string n;
	cin>>n;
	isDuck(n)?printf("It's a Duck number"):printf("It's not a Duck number");
	
	
	
	
	
}
