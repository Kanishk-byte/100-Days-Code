#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Calculate the product of all the elements in the given array.

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

    // Product
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }

    cout << "Product of array : " << product;

    return 0;
}