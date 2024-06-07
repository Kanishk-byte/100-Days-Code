#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Trapping Rain Water

void trap(vector<int> &v)
{
    int size = v.size();
    // Previous greatest element in the array
    int prev[size];
    prev[0] = -1;
    int max = v[0];
    for (int i = 1; i < size; i++)
    {
        prev[i] = max;
        if (max < v[i])
            max = v[i];
    }
    // Next greatest element in the array
    int next[size];
    next[size - 1] = -1;
    max = v[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        next[i] = max;
        if (max < v[i])
            max = v[i];
    }
    // Minimum array
    int mini[size];
    for (int i = 0; i < size; i++)
    {
        mini[i] = min(prev[i], next[i]);
    }
    // Calculating Water
    int water = 0;
    for (int i = 1; i < size - 1; i++)
    {
        if (v[i] < mini[i])
        {
            water = water + (mini[i] - v[i]);
        }
    }
    cout << water;
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

    trap(v);

    return 0;
}