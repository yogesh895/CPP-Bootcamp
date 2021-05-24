#include <iostream>
using namespace std;
int main() 
{
    int a,count=0,sum=0;
    for (int i=1;i<5;i++)   
    {

        cout << "Enter a no.:" <<i<<" ";
        cin >> a;  
        if(a>99&&a<1000)
        {
            count++;   //count=1+1=2 +++5
            sum+=a;   // sum=564 + 334 
        }
    }
    cout << "The count of Three digit no. is : " << count;
    cout << "\nThe sum of Three digit no. is : " << sum;

    return 0;
}
