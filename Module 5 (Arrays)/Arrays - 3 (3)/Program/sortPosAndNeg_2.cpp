#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Move all the positive numbers to the beginning and negative to end with constant extra space.

void display(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void sort(vector<int> &v, int n)
{
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        if (v[i] > 0)
            i++;
        if (v[j] < 0)
            j--;
        if (i > j)
            break;
        if ((v[i] < 0) && (v[j] > 0))
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> v;

    int n = v.size();
    cout << "Enter Vector Size : ";
    cin >> n;

    cout << "Enter Vector Elements : ";
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }

    cout << "Unsorted Vector : ";
    display(v, n);

    // * Sorting Vector :-
    sort(v, n);
    cout << endl;

    cout << "Sorted Vector : ";
    display(v, n);

    return 0;
}