#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	vector<string>v{"for","else","if"};

	string word;
	cin>>word;
	int flag=0;
	for(int i=0;i<v.size();i++)
	{
		if(word==v[i]) flag=1;
	}
	cout<<flag;
	cout<<("string"=="string");
	
}
