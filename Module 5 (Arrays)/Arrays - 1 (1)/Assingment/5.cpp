#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

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

    // Missing Element

    bool flag = false; // No missing element
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i + 1)
        {
            flag = true;
            cout << "Smallest positive missing element : " << i + 1;
            break;
        }
    }

    if (flag == false)
    {
        cout << "There was no missing element";
    }

    return 0;
}