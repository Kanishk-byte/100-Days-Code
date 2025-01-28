#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Sort the array of 0's, 1's and 2's.

void input(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }
}

void display(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void sort012(vector<int> &v, int n)
{
    int noZ = 0;
    int noO = 0;
    int noT = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            noZ++;
        else if (v[i] == 1)
            noO++;
        else
            noT++;
    }

    for (int i = 0; i < n; i++)
    {
        if (i < noZ)
            v[i] = 0;
        else if (i < (noZ + noO))
            v[i] = 1;
        else
            v[i] = 2;
    }
    return;
}

int main()
{

    vector<int> v;

    int n = v.size();
    cout << "Enter Vector Size : ";
    cin >> n;

    cout << "Enter Vector Elements (0,1,2) : ";
    input(v, n);

    cout << "Unsorted Vector : ";
    display(v, n);

    // * Sorting Vector :-
    sort012(v, n);
    cout << endl;

    cout << "Sorted Vector : ";
    display(v, n);

    return 0;
}