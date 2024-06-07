#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Find the next greatest permutation of the array.

void nextPermutation(vector<int> &v)
{

    int size = v.size();

    // Finding Pivot Index.
    int idx = -1;
    for (int i = size - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        reverse(v.begin(), v.end());
        return;
    }

    // (Sorting / Reverse) After Pivot.
    reverse(v.begin() + idx + 1, v.end());

    // Finding just greater element than idx.
    int j = -1;
    for (int i = idx + 1; i < size; i++)
    {
        if (v[i] > v[idx])
        {
            j = i;
            break;
        }
    }

    // Swapping idx and j.
    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp;
}

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

    nextPermutation(v);

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}