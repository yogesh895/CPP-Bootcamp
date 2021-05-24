#include<iostream>
using namespace std;
int main()
{
	
	int sum=0, rem=0,n;
	
	cout<<"Enter a random number to find the sum of digits";
	cin>>n;
	
	for(sum; n>0; n/=10)
	{                          //364
		rem=n%10;
		sum+=rem;
	}
	
	cout<<"The sum of digits is:"<<sum;


return 0;
}

