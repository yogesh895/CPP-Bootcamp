#include<iostream>
using namespace std;
int main()
{
 int i,n,rev=0,r;
 
 cout<<"Enter the number to reverse";
 cin>>n;
 
 for(i=n;i>0;i=i/10)
 {
 	r=i%10;
 	rev=rev*10 + r;
 }
 
 cout<<"The reverse is"<<rev;

return 0;
}

