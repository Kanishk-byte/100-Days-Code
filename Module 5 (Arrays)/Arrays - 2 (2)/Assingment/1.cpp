#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Count the number of elements strictly greater than x.

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

    int x;
    cout << "Enter target : ";
    cin >> x;

    int count = 0;
    bool flag = false;

    for (int i = 0; i < size; i++)
    {
        if (v[i] > x)
        {
            flag = true;
            count++;
        }
    }

    if (flag == true)
    {
        cout << "Greater elements : " << count;
    }
    else
    {
        cout << "Greater elements : " << count;
    }

    return 0;
}