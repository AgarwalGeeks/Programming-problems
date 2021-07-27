#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[]={1,34,3,654,23,43,6,7,543},b=23;
	sort(a,a+9);
	cout<<binary_search(a,a+9,5403);	
}
