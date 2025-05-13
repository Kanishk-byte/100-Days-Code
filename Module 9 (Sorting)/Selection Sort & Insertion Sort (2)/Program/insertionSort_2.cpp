#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Insertion Sort Code

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
    for (int ele : arr)
    {
        cout << ele << " ";
    }

    // * Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int j = i;
        // * Swapping
        while (j >= 1)
        {
            if (arr[j] >= arr[j - 1])
            {
                break;
            }
            else
            {
                swap(arr[j], arr[j - 1]);
            }
            j--;
        }
    }

    cout << endl;

    // * Printing Array Element's
    cout << "Array After Sorting : ";
    for (int ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}