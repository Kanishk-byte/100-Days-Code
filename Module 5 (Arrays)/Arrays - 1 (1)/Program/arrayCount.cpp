#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Count the number of elements in Array greater than given number x.

int main()
{

    int size;
    cout << "Enter size of Array : ";
    cin >> size;

    int arr[size];
    int count = 0;

    // * Input
    cout << "Enter elements of Array : " << endl;
    for (int i = 0; i <= size - 1; i++)
    {
        cin >> arr[i];
    }

    // Number
    int x;
    cout << "Enter x : ";
    cin >> x;

    // * count
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }

    cout << "Count of Array : " << count;

    return 0;
}