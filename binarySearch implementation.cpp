#include<iostream>
using namespace std;
int binarySearch(int Arr[],int n , int target)
{
	int start=0,end=n-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(Arr[mid]==target)
			return mid;
		else if(Arr[mid]<target)
			start=mid+1;
		else
			end=mid-1;	
	}
	return -1; // element is not present in list	
}
int main()
{
	int a[]={1,2,3,055,345,654};
	cout<<binarySearch(a,6,45);
	
	
	
	
	
	
}
