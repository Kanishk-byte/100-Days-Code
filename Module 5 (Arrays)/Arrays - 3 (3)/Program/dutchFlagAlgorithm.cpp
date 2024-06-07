#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Dutch Flag Algorithm (One Pass Solution)

void sort(vector<int> &v)
{

    int low = 0;
    int mid = 0;
    int high = v.size() - 1;

    /*
    * Conditions :)

    -> Mid ke barre mai soche;
    -> 0 to (low - 1) -> 0;
    -> (high + 1) to end -> 2;
    -> low to (mid - 1) -> 1;
    */

    while (mid <= high)
    {

        if (v[mid] == 2)
        {
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
        }

        else if (v[mid] == 0)
        {
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }

        else
        {
            mid++;
        }
    }
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