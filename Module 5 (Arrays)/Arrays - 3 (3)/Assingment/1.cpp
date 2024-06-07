#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Count the number of triplets whose sum is equal to the given value x.

int main()
{

    vector<int> v;

    int x;
    cout << "Enter target : ";
    cin >> x;

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

    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = i + 2; k < size; k++)
            {
                if (v[i] + v[j] + v[k] == x)
                {
                    cout << "(" << i << "," << j << "," << k << ")" << endl;
                }
            }
        }
    }

    return 0;
}