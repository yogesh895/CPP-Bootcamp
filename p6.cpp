#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a two digit integer number : ";
	cin>>n;
	((n>9 && n<100) || (n< (-9) && n> (-100)))?cout<<"Mr.Abhishek Sain":cout<<"entered number not two digit";
	return 0;
	
}
