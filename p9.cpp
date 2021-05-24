#include<iostream>
using namespace std;
int main()
{
  	int a, b;
  	char c;
  	cout<<"Enter a and b";
  	cin>>a>>b;
  	cout<<"Enter Operation";
  	cin>>c;
  	
  	if(c=='+')
  	{
  		cout<<a+b;
	}
	
	else if(c=='-')
	{
		cout<<a-b;
	}
	
	else if(c=='*')
	{
		cout<<a*b;
	}
	
	else if(c=='/')
	{
		cout<<a/b;
	}
  	else 
  	{
  		cout<<"Not a valid operator";
	}

return 0;
}

