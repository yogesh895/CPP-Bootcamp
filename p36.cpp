#include<iostream>
using namespace std;

int isPrime(int num)
{
	int flag=0;
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)  return 0;
	else return 1;
}
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(isPrime(i)==1)
			cout<<i<<endl;
	}

return 0;
}

