#include<iostream>
using namespace std;
int main()
{
	int f=0,s=1,next=0,n,i;
	cin>>n;
	cout<<f<<endl<<cout<<s;
	for(i=2;i<n;i++)
	{
	
			next=f+s;
			f=s;
			s=next;
		}
		cout<<next<<endl;
	}

return 0;
}

