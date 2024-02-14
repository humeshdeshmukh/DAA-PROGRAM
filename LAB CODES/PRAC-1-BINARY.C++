/*pract -1:- 
 objective:- to implement the concept of binary search algorithm
 
 aim:- write a c++ program to implement binary search algorithm.discusss it's complexity*/

#include <iostream>
using namespace std;

#define MAX 20

void binary_search(int *a, int size);

int main()
{
    int a[MAX];
    int i;

    cout << "\n HUMESH DESHMUKH \n ROLL NO. 37";
    cout << "\nEnter " << MAX << " elements in sorted order: ";
    
    for (i = 0; i < MAX; i++)
    {
        cin >> a[i];
    }

    binary_search(a, MAX);

    return 0;
}

void binary_search(int *a, int size)
{
    int data, low, high, mid;

    cout << "\nEnter the element to be searched: ";
    cin >> data;

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == data)
        {
            cout << "\nSearch is successful!";
            cout << "\nElement is present at position " << mid + 1 << ".\n";
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

    cout << "\nElement not found.\n";
}


/*theory:-


Binary Search:

Binary search is a searching algorithm that efficiently finds the position of a target value within a sorted array.
 It works by repeatedly dividing the search interval in half.

Algorithm:

Initialization:

Set the left boundary (left) to 0.
Set the right boundary (right) to the size of the array minus 1.
Search Loop:

While the left boundary is less than or equal to the right boundary:
Calculate the middle index as mid = left + (right - left) / 2.
Compare the element at the middle index with the target value.
Conditions:

If the element at mid is equal to the target, the search is successful, and mid is the index of the target.
If the element at mid is less than the target, update left = mid + 1 to search in the right half.
If the element at mid is greater than the target, update right = mid - 1 to search in the left half.
Termination:

If the left boundary becomes greater than the right boundary, the target is not in the array, and the algorithm terminates.


Time Complexity:
The time complexity of the binary search algorithm is O(log n), where "n" is the number of elements in the sorted array.
 This is because with each comparison, the search space is effectively divided in half.
  In each iteration, the size of the remaining search space is reduced by half. Hence,
   the algorithm converges very quickly to the desired element, making it highly efficient for large datasets.

It's important to note that the binary search algorithm requires the array to be sorted for it to work correctly. 
If the array is unsorted, a different search algorithm, like linear search, would be more appropriate*/