void printMaxActivities(Activity arr[],int n)
{
	sort(arr,arr+n,compare);
	int i=0;
	cout<<arr[i].start<<" "<<arr[i].finish;
	
	for(int j=1;j<n;j++)
	{
		if(arr[j].start>=arr[i].finisgh)
		{
			cout<<arr[j].start<<" "arr[j].finish;
			i=j;
			
		}
		
	}
	
	
	
	
}
