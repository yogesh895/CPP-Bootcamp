#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter the first number";
	cin>>a;
	cout<<"Enter the second number";
	cin>>b;
	while(a<=b)
	{
		if(a%2==0)
		{
			cout<<a<<endl;	
		}	
		a++;
	}	
	


return 0;
}


