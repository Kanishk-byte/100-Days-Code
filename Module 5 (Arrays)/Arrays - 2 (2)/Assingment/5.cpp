#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

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

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            v[i] = v[i] + 10;
        }
        if (i % 2 != 0)
        {
            v[i] = v[i] * 2;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}