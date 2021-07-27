#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
bool isPangram(string str,int choices)
{
	if(str.length()<26) return false;
	int count[26]={0},countZero=0;
	for(int i=0;i<str.length();i++)
		count[str[i]-'a']++;
	
	for(int i=0;i<26;i++)
	{
		if(count[i]==0) countZero++;
		
	}
	if(countZero<=choices)
		return true;
	return false;
	
	
	
	
	
	
}

int main()
{
	string s="abbbbcdefghij";
	cout<<isPangram(s,3);
	
	
}
