#include <iostream>
using namespace std;

#define MAX 10

void binary_search(int *a, int size);
int main()
{
    int a[MAX];
    int i;

    cout << "\n humesh deshmukh \n roll no=37";
    cout << "\n eneter" << MAX << "element in sorted order:";

    for (i = 0; i < MAX; i++)
    {
        cin >> a[i];
    }

    binary_search(a, MAX);

    return 0;
}

void binary_search(int *a, int size)
{
    int  data,low, high, mid;

    low = 0;
    high = size - 1;

    while (low <= high)
    {   
        mid = (low + high) / 2;
        if (a[mid] == data)
        {
            cout << "\n search is successful !:";
            cout << "\n element is present at position " << mid + 1 << "\n";
            return;
        }
        else if (a[mid] < data)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "\n element not found,\n";
}