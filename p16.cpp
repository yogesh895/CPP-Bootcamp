#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%4==0 && n%5==0 && n%6==0)
	{
		cout<<"The no. is divisible by either 4 or 5 or 6";
	}
	
	else 
	{
		cout<<"not a valid integer number";
	}

return 0;
}

