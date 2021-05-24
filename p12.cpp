#include <iostream>
using namespace std;
int main() 
{
    char ch;
    cin>>ch;
    switch(ch)
    {
        case 'A':
        case 'a':
        case 'i':
        case 'I':
        case 'e':
        case 'E':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        cout<<"It is vowel";
        break;
        
        default:
        	cout<<"Not a valid alpha";
    }

    return 0;
}
