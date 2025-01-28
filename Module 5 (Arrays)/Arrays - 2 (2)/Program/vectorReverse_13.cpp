#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to do Reverse of a vector.

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

    /*
    * Reverse Function
    reverse(v.begin(), v.end());
    */

    for (int i = size - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}