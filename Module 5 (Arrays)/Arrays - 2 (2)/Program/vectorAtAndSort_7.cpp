#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : at & sort functions in vector.

int main()
{

    vector<int> v;

    v.push_back(9);
    v.push_back(1);
    v.push_back(6);
    v.push_back(0);

    // * at function ->>
    v.at(2) = 7;             // Updating
    cout << v.at(2) << endl; // Printing value at index 2

    // Printing
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    cout << endl;

    // * sort function ->>
    sort(v.begin(), v.end());

    // Printing
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    cout << endl;

    return 0;
}