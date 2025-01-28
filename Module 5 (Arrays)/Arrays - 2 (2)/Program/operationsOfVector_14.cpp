#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Operations of Vector

int main()
{

    vector<int> v; // You not need to mention size.

    // * Inserting Element's
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);

    // * Printing Element's
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // * pop_back();
    v.pop_back();
    v.pop_back();

    // * Printing Element's
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}