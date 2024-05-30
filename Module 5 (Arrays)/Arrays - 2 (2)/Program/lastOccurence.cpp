#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Find the last occurence of a given number in vector.

int main()
{

    vector<int> v;

    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);

    int x = 6;
    int idx = -1;

    /*
    * Forward loop -> More time complexity
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            idx = i;
        }
    }
    */

    // * Backward loop -> More Efficent Method
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            idx = i;
            break;
        }
    }

    cout << idx;

    return 0;
}