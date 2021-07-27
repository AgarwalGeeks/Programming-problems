#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void quickSort(int *arr,int start,int end)
{
	if(start<end)
	{
		int pivot=partition(arr,start,end)
		quickSort(arr,start,pivot-1);
		quickSort(arr,pivot,end);
			
	}
		
}

int partition(int *arr,int low,int high)
{
	int pi=arr[high];
	int start=low-1;
	while(int j=low;j<=high-1;j++)
	{
		if(arr[j]<=pivot)
		{
			start++;
			swap(&arr[start],&arr[j]);
			
			
		}
		
		
		
		
	}
	
	swap(&arr[start+1],&arr[high]);
	return start+1; 
	
	
	
	
	
	
	
	
	
	
}
int main()
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
