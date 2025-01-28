#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

// * Ques : Write a program to merge two sorted Array's.

using namespace std;

vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{

    int n = arr1.size();
    int m = arr2.size();

    vector<int> res(n + m);

    int i = 0; // arr1
    int j = 0; // arr1
    int k = 0; // res

    while (i < n && j < m)
    {

        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            i++;
            k++; // Use Redundancy
        }

        if (arr2[j] < arr1[i])
        {
            res[k] = arr2[j];
            j++;
            k++; // Use Redundancy
        }

        // Remaining Elements
        if (i == n)
        { // arr1 ke sarre elements utah chuka hu.
            while (j <= m - 1)
            {
                res[k] = arr2[j];
                k++;
                j++;
            }
        }

        if (i == m)
        { // arr2 ke sarre elements utah chuka hu.
            while (i <= n - 1)
            {
                res[k] = arr1[i];
                k++;
                i++;
            }
        }
    }
    return res;
}

int main()
{

    vector<int> arr1;
    vector<int> arr2;

    int n = arr1.size();
    cout << "Enter arr1 Size : ";
    cin >> n;

    int m = arr2.size();
    cout << "Enter arr2 Size : ";
    cin >> m;

    cout << "Enter arr1 Elements : ";
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        arr1.push_back(elem);
    }

    cout << "Enter arr2 Elements : ";
    for (int i = 0; i < m; i++)
    {
        int elem;
        cin >> elem;
        arr2.push_back(elem);
    }

    vector<int> v = merge(arr1, arr2);

    cout << "Merge Sorted Array's : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}