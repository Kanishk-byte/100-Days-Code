#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to find the largest three elements in the array.

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

    int max = INT_MIN;
    int sMax = INT_MIN;
    int tMax = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if ((v[i] > sMax) && (v[i] != max))
        {
            sMax = v[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if ((v[i] > tMax) && (v[i] != max) && (v[i] != sMax))
        {
            tMax = v[i];
        }
    }

    cout << "Largest : " << max << endl;
    cout << "Second Largest : " << sMax <<endl;
    cout << "Third Largest : " << tMax <<endl;

    return 0;
}