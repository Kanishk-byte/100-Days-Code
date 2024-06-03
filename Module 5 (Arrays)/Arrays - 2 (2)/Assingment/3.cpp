#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Check if the given array is sorted or not.

int main()
{

    vector<int> v;

    int size = v.size();
    cout << "Enter size : ";
    cin >> size;

    cout << "Enter elements : " << endl;

    for (int i = 0; i < size; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }

    bool flag = true; // Means Sorted

    for (int i = 0; i < size - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            flag = false; // Means Un - Sorted
            break;
        }
    }

    if (flag == true)
        cout << "Sorted";
    else
        cout << "Un - Sorted";

    return 0;
}