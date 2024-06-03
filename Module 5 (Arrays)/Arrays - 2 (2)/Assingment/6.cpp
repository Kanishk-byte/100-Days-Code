#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// Function to find the unique number in an array where all other elements are repeated twice
int findUnique(int arr[], int size)
{
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique ^= arr[i]; // XOR operation
    }
    return unique;
}

int main()
{
    // Size of array
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    // Array
    int arr[size];

    // Input
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Find the unique number
    int uniqueNumber = findUnique(arr, size);

    // Output the unique number
    cout << "The unique number is: " << uniqueNumber << endl;

    return 0;
}
