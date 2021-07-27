#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

bool isCountSame(string s,int index,int size,int countArray[])
{
	int countLocal[256];
	for(int i=index;i<(index+size);i++)
		countLocal[s[index]]++;
	for(int i=0;i<256;i++)
		{
			if(countArray[i]!=countLocal[i])
				return false;
		}
	return true;
	
	
	
	
	
	
	
}



int countAnagram(string s1,string s2)
{
	int count[256],result=0;
	for(int i=0;i<s2.length();i++)
		count[s2[i]]++;
	//cout<<count;
	for(int i=0;i<s1.length();i++)
		{
			if(isCountSame(s1,i,s2.length(),count))
				result++;
		}
	return result;
}
int main()
{
	string str1="aababbaa";
	string str2="aaba";
	cout<<countAnagram(str1,str2);
	
	
	
	
	
}
