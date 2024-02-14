#include <iostream>
using namespace std;

int main()
{
    cout<<endl<<"HUMESH DESHMUKH";
    cout<<endl<<"Roll no.37 "<<endl;
    const int size = 20;
    int arr[size];

   
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    
    int min = arr[0];
    int max = arr[0];

 
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

   
   cout << "Minimum element: " << min << endl;
   cout << "Maximum element: " << max << endl;

    return 0;
}
