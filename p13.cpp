#include <iostream>
using namespace std;
int main() {
   int n, sum=0, rem=0;
   cin>>n;
   
   for(sum; n>0; n/=10 )
   {
   		rem=n%10;
   		sum+=rem;
   }
   
   cout<<sum;
   
   

    return 0;
}
