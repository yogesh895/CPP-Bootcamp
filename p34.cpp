#include<iostream>
using namespace std;
int main()
{
	int search=15,i, n=5;
	int arr[]={1,2,3,4,5};
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			cout<<search<<" is present at "<<i;
			break;
		}
	}
	if(i==n)
	{
		cout<<search<<"is not present in the array";
	}

return 0;
}

