#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
void get_products_of_all_ints_except_at_index(vector<int>v)
{
	for(int i=0;i<v.size();i++)
	{
		
			int product=1;
		for(int j=0;j<v.size();j++)
		{
				int temp;
			if(i==j)
			{
			
				temp=v[j];
				v[j]=1;
				
			}
			product*=v[j];
			if(i==j)
			v[j]=temp;
		}
		
		cout<<product;
	}
	
}
int main()
{
	
	vector<int>vec{1,0,0,1};
	fun(vec);
	
	
	
}
