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
	
	int v,j;
	
	for(int i=1;i<n;i++)
	{
		v=arr[i];
		j=i;
		
		while(arr[j-1]>v && j>=1)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=v;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}

return 0;
}

