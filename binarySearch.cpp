#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,3,4,6,7,9,10,15,17,31,78,89,99};
	
	int len=13;
	int target=31;
	int l=0;
	int h=len-1; 
	int ans=-1; 
	
	while(l<=h)
	{
		int mid= (l+h)/2;
		if(arr[mid]==target)
		{
			ans=mid;
			break;
		}
		
		else if (arr[mid]> target)
		{
			h=mid-1;
		}
		
		else 
		{
			l=mid+1;
		}
		
	}
	
	cout<<ans;
return 0;
}

