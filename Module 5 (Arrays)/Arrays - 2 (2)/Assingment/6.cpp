#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Function to find the unique number in an array where all other elements are repeated twice

int main()
{
    vector<int> v;

    int size = v.size();
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }

    cout << "The unique elements in the array are : ";
    for (int i = 0; i < size; i++)
    {
        bool flag = true; // Unique
        for (int j = 0; j < size; j++)
        {
            // Skip the same element
            if (i == j)
                continue;

            // Check if the element is repeated
            if (v[i] == v[j])
            {
                flag = false; // Not Unique
                break;
            }
        }
        
        // If the element is unique, print it
        if (flag == true)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}