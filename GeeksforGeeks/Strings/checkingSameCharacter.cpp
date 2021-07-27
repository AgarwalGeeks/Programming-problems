





#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	char extra='+';
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++)
		{
			extra=extra^(s1[i]^s2[i]);
		}
	if(extra=='+')
		cout<<"Yes";
	else
		cout<<"no";
	
	
	
	
	
	
}
