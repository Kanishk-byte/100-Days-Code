#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Move all the positive numbers to the beginning and negative to end with constant extra space.

void sort(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        if (v[i] > 0)
            i++;
        if (v[j] < 0)
            j--;
        if (i > j)
            break;
        if ((v[i] < 0) && (v[j] > 0))
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(-3);
    v.push_back(8);
    v.push_back(-9);
    v.push_back(-7);
    v.push_back(-6);
    v.push_back(2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    sort(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}