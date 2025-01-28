#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Linear Search
// * Find the element x in the array. Take array and x as a input.

int main()
{

    // Size of Array
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    // Array
    int arr[size];

    // Input
    cout << "Enter elements of Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Element to be searched
    int x;
    cout << "Enter x : ";
    cin >> x;

    // Checkmark
    bool flag = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
        }
    }

    if (flag == true)
    {
        cout << "Element is Present in Array" << endl;
    }
    else
    {
        cout << "404 Element X Not Found";
    }

    return 0;
}