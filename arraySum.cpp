#include<iostream>
using namespace std;

int sum(int x, int a[])
{
	if(x<0) return 0;
	return sum(x-1,a) + a[x];
}


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	cout<<sum(0,a);

}