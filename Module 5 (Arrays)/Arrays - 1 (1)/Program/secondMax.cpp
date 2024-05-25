#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Second Maximum element of the Array.

int main()
{

    // Size of Array
    int size;
    cout << "Enter siz eof array : ";
    cin >> size;

    // Array
    int arr[size];

    // Input
    cout << "Enter elements of Array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // * Max
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // * Second Max
    int sMax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] != max) && (arr[i] > sMax))
        {
            sMax = arr[i];
        }
    }

    cout << "Maximum element is : " << max << endl;
    cout << "Second Maximum element is : " << sMax << endl;

    return 0;
}