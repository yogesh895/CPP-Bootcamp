#include<iostream>
using namespace std;
int main()
{
	int n, min;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0; i<n-1; i++)
	{
		min=i;
		for(int j=i+1; j<n; j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}		    
		}
			int temp=arr[min];
			arr[min]=arr[i];
			arr[i]= temp;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}

return 0;
}

