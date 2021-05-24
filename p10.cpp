#include<iostream>
using namespace std;
int main()
{
	int a=5,b=3;
	char c;
	cin>>c;
	
	if(c=='+')
	{
		cout<<"sum is"<<a+b;
	}
	
	else if(c=='-')
	{
		cout<<"subtraction"<<a-b;
	}
	
	else if(c=='*')
	{
		cout<<"multiplication"<<a*b;
	}
	else if(c=='/')
	{
		cout<<"division"<<a/b;
	}
	
	else 
	{
		cout<<"not a valid operator";
	}


return 0;
}

