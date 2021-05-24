#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sieve[n+1];
	sieve[1]=0;
	
	
	for(int i=2;i<=n;i++)
		sieve[i]=1;
		
	for(int i=0;i<=n;i++)
	{
		cout<<i<<"--"<<sieve[i]<<endl;
	}
	
//	cout<<sieve[1]<<endl;
//	cout<<sieve[100]<<endl;
//	cout<<sieve[0];
//	
//	for(int i=2; i*i<=n;i++)
//	{
//		if(sieve[i]==1)
//		{
//			for(int j=i*i;j<=n;j=j+i)
//			{
//				sieve[j]=0;
//			}
//		}
//	}
//	for(int i=1;i<=n;i++)
//	{
//		if(sieve[i]==1)
//		{
//			cout<<i<<endl;
//		}
//	}

return 0;
}

