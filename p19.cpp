#include<iostream>
using namespace std;
int main()
{
	int a,b=0,r;
	cout<<"Enter a number";
	cin>>a;
	
	r=a%10;
	b=b*10+r;
	a=a/10;
	
	r=a%10;
	b=b*10+r;
	a=a/10;
	
	r=a%10;
	b=b*10+r;
	a=a/10;
	
	cout<<"Reverse is "<<b;
	return 0;
	
	
	
	
	

return 0;
}

