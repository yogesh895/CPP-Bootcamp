#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=n-1; i>=0; i--)
	{
		int swapped = 0;
		for(int j=0; j<i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]= temp;
				swapped=1;
			}
		}
		if(swapped==0) break;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	

return 0;
}

