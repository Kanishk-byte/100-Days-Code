#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Maximum element of Array

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

    // int max = arr[0];
    int max =  INT_MIN;

    // * Maximum
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum element in array is : " << max;

    return 0;
}