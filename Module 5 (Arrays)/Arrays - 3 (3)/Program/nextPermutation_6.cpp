#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Find the next greatest permutation of the array.

void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }
}

void display(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

void nextPermutation(vector<int> &v)
{

    int size = v.size();

    // * 1) Finding Pivot Index.
    int idx = -1;
    for (int i = size - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        reverse(v.begin(), v.end());
        return;
    }

    // * 2) (Sorting / Reverse) After Pivot.
    reverse(v.begin() + (idx + 1), v.end());

    // * 3) Finding just greater element than idx.
    int j = -1;
    for (int i = idx + 1; i < size; i++)
    {
        if (v[i] > v[idx])
        {
            j = i;
            break;
        }
    }

    // * 4) Swapping idx and j.
    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp;
}

int main()
{

    vector<int> v;

    int size = v.size();
    cout << "Enter Vector Size : ";
    cin >> size;

    cout << "Enter Vector Elements : ";
    input(v, size);

    nextPermutation(v);

    cout << "Next Permutation : ";
    display(v, size);

    return 0;
}