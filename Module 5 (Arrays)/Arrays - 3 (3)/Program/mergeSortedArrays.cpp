#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Write a program to merge two sorted Array's.

vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    vector<int> res(n + m);

    int i = 0; // arr1
    int j = 0; // arr2
    int k = 0; // res

    while (i <= n && j <= m)
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
        { // arr1 ke sarre elements utah chukar hu.
            while (j <= m - 1)
            {
                res[k] = arr2[j];
                k++;
                j++;
            }
        }

        if (j == m)
        { // arr2 ke sarre elements utah chukar hu.
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
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    cout << " ";

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);

    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;

    vector<int> v = merge(arr1, arr2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}