#include<iostream>
using namespace std;
int main()
{
	int a=48, n=0 , sum=0;
	if(a%2==0)
	{
		n=a%10;
		a=a/10;
		sum = n+ a;
		cout<<"Sum of digits is :"<<sum;
	}
	
	else{
		cout<<"Number is not even";
	}
	

return 0;
}

