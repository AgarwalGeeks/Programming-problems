#include<iostream>
using namespace std;
int main()
{
	int a;
	char *x;
	x=(char *)&a;
	a=512;
	
	x[0]=1;
	
	x[1]=2;
	//cout<<x;
	cout<<a;
	
	
	
}
