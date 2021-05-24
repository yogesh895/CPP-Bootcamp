#include<iostream>
using namespace std;
int main()
{
  int a=0,n,i;
  cin>>n;
  
  for(i=1;i<=n;i++)
  {
  	a=a*i;
  }
  
  cout<<"Factorial of "<<n <<endl<<a;

return 0;
}

