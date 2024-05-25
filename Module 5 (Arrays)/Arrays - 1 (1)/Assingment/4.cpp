#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Given an array, predict if the array contains duplicates or not.

int main()
{

    // Size of the array
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    // Array
    int arr[size];

    // Input
    cout << "Enter elements of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Checkmark
    bool flag = false;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
    }

    // Conditions
    if (flag == true)
        cout << "duplicate";
    else
        cout << "no";

    return 0;
}