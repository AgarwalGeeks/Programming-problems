#include<iostream>
using namespace std;
int firstOccurence(int Arr[],int n , int target)
{
	int start=0,end=n-1,result=-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(Arr[mid]==target)
		{
				result=mid;
				end=mid-1;
		}
		else if(Arr[mid]<target)
			start=mid+1;
		else
			end=mid-1;	
	}
	return result; // element is not present in list	
}
int main()
{
	int a[]={1,2,3,3,3,654};
	cout<<firstOccurence(a,6,3);	
}
