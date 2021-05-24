#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int p=0, flag;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i] != arr[i+1])
	        {
	            p++;
	        }
	    }
	    flag=n-x;
	    cout<<min(flag,c)<<endl;
	    
	    
	}
	return 0;
}
