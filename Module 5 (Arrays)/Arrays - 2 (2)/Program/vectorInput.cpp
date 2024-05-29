#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Taking Input In Vector

int main()
{

    vector<int> v;

    // * This code doesn't give anything because. Size of Vector is not given.

    for (int i = 0; i < v.size(); i++)
    {
        int x; // * Extra variable for input
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}