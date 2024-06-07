#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Sort the array of 0's, 1's and 2's.

void sort(vector<int> &v)
{

    int noOfZero = 0;
    int noOfOne = 0;
    int noOfTwo = 0;

    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            noOfZero++;
        else if (v[i] == 1)
            noOfOne++;
        else
            noOfTwo++;
    }

    for (int i = 0; i < n; i++)
    {
        if (i < noOfZero)
            v[i] = 0;
        else if (i < (noOfZero + noOfOne))
            v[i] = 1;
        else
            v[i] = 2;
    }

    return;
}

int main()
{

    vector<int> v;

    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);

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