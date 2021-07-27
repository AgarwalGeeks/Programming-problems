#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
	vector<int>v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i*2);
	}
	v.push_back(18);
	v.push_back(18);
	cout<<"size:"<<v.size()<<endl;
	/*cout<<"max:"<<*max_element(v.begin(),v.end())<<endl;
	cout<<"min:"<<*min_element(v.begin(),v.end())<<endl;
	cout<<"sum of vector elements:"<<accumulate(v.begin(),v.end(),0)<<endl;
	cout<<"occurence of 18:"<<count(v.begin(),v.end(),18)<<endl;
	if(find(v.begin(),v.end(),2)!=v.end()) cout<<"2 found"<<endl;
	v.erase(v.begin()+8);
	if(find(v.begin(),v.end(),16)==v.end()) cout<<"16 not found"<<endl;
	*/
	v.erase(v.begin()+2);
		for(int i=0;i<11;i++)
	{
		cout<<v[i];
	}
}
