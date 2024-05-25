#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Second Maximum element of the Array in one pass.

int main()
{

    // Size of Array
    int size;
    cout << "Enter size of array : ";
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
    // * Second Max
    int mx = INT_MIN;
    int sMax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > mx)
        {
            sMax = mx;
            mx = arr[i];
        }
        else
        {
            sMax = max(sMax, arr[i]);
        }
    }

    cout << "Maximum element is : " << mx << endl;

    if (sMax == INT_MIN)
        cout << "No. second largest exist";

    cout << "Second Maximum element is : " << sMax << endl;

    return 0;
}