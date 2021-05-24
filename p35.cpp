#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    for (int i=0;i<10;i++)
    {
        cout << "Enter element in array : ";
        cin >> arr[i];
    }
    cout << "The array is : ";
    for (int i=0;i<10;i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
