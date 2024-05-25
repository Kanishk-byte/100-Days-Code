#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Calculate the sum of the elements of the Array.

int main()
{

    int size;
    cout << "Enter size of Array : ";
    cin >> size;

    int arr[size];
    int sum = 0;

    // * Input
    cout << "Enter elements of Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // * Sum
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum of Array : " << sum;

    return 0;
}