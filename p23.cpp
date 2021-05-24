#include<iostream>
using namespace std;
int main()
{
  int f=0, s=1, next=0, n;
  cout<<"Enter no. of terms";
  cin>>n;
  
  for(int i=0;i<n;i++)
  {
  	if(i<=1)
  	{
  		next=i;
	}
	
	else{
		next=f+s;
		f=s;
		s=next;
	}
	
	cout<<next<<endl;
}
  

return 0;
}

