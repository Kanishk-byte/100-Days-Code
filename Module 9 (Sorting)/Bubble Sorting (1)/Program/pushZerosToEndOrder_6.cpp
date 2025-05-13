#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Push 0's to end while maintaining the relative order.

int main()
{

    // * Array Size
    int n;
    cout << "Enter Array Size : ";
    cin >> n;

    // * Array
    int arr[n];

    // * Input Array Element's
    cout << "Enter Array Element's : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // * Printing Array Element's
    cout << "Array Before Sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // * Bubble Sort
    for (int i = 0; i < n - 1; i++)
    { // * (n - 1) passes
        // * Traverse
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                swap(arr[j], arr[j + 1]); // * Swap
            }
        }
    }

    cout << endl;

    // * Printing Array Element's
    cout << "Array After Sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}