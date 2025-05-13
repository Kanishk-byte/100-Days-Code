#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Selection Sort Code

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

    // * Selection Sort
    for (int i = 0; i < n - 1; i++)
    { 
        int min = INT_MAX;
        int mindx = -1;
        // * Minimum Element Calculation in Orange Box
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
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