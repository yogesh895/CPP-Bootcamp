#include<iostream>
using namespace std;
int main()
{
 int i, a,flag=0;
 cout<<"ENter thr number";
 
 cin>>a;
 for(i=2;i<a;i++)
 {
 	if(a%i==0)
	 {
	 	flag=1;
	 	break;
	 }
	
 }
 
 if(flag==1)
 {
 	cout<<"Number is not prime";
 }
 else
 {
 	cout<<"Number is prime";
 }

return 0;
}

