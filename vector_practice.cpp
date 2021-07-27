#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(5);
	v.push_back(3);
	v.push_back(8);
	v.push_back(15);
	v.push_back(2);
	//sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<"\n";
	}
	//cout<<binary_search(v.begin(),v.end(),5);
	//int x=accumulate(v.begin(),v.end(),10);
	//cout<<x;
	
	
	
	
	
	
}
