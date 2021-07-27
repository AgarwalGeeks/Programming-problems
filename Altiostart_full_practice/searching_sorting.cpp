void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	
	
}

bool binarySearch(int arr[],int start,int end,int key)
{
	
	if(start<=end)
	{
		int mid=start+(end-start)/2;
		
		if(arr[mid]==key)
			return true;
		else if(arr[mid]>key)
			return binarySearch(arr,start,mid-1,key);
		else
			return binarySearch(arr,mid+1,end,key);		
	}
	
	return false;	
}

void bubbleSort(int arr[],int size)
{
	bool sorted;
	for(int i=0;i<size-1;i++)
	{
		sorted=false;
		
		for(int j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
				{
					swap(&arr[j],&arr[j+1]);
					
					sorted=true;
				}
			
		}
		
		if(sorted==false)
			break;
			
	}
		
}

void quickSort(int arr[],int start,int end,int size)
{
	if(start<=end)
	{
		int pi=partition(arr,start,end,size);
		quickSort(arr,start,pi-1,size);
		quickSort(arr,pi+1,end,size);
			
	}	
}

int partition(int arr[],int start,int end,int size)
{
	int pivot=arr[end];
	
	int i=start-1;
	
	for(int j=start;j<=end-1;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(&arr[j],arr[i]);
			
		}
			
	}
	
	swap(&arr[i+1],&arr[end]);
	return i+1;
	
	
}

void mergeSort(int arr[],int start,int end,int size)
{
	if(start<=end)
	{
		int mid=start+(end-start)/2;
		
		mergeSort(arr,start,mid,size);
		mergeSort(arr,mid+1,end,size);
		
		merge(arr,start,mid,end,size);
		
		
	}	
	
}

void merge(int arr[],int start,int mid,int end,int size)
{
	int i,j,k;
	
	int n1=mid-start+1;
	int n2=end-mid;
	
	int Left[n1],Right[n2];
	
	for(i=0;i<n1;i++)
		Left[i]=arr[start+i];
	
	for(j=0;j<n2;j++)
		Right[j]=arr[m+1+j];
		
	i=0;
	j=0;
	k=start;
	
	while(i<n1 && j<n2)
	{
		if(Left[i]<=Right[j])
		{
			arr[k]=Left[i];
			k++;
			i++;
			
		}
		
		else
		
		{
			arr[k]=Right[j];
			k++;
			j++;
				
		}
			
	}
	
	if(i<n1)
	{
		arr[k]=Left[i];
		k++;
		i++;
		
	}
	
	if(j<n2)
	{
		arr[k]=Left[j];
		k++;
		j++;
		
	}
	
	
	
}
