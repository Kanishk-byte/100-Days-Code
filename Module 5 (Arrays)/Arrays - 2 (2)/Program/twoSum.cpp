#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Wap to find the doublet in the vector, whose sum is target value.

int main()
{

    int x;
    cout << "Enter target : ";
    cin >> x;

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

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 17; j < size; j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }

    return 0;
}