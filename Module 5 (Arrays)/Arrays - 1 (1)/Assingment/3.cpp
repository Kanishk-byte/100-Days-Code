#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Find the minimum value out of all elements in the array.

int main()
{

    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];

    // Input
    cout << "Enter elements of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Minimum
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Minimum element is : " << min;

    return 0;
}