#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Sort the array of 0's and 1's.

void display(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

// * Method - 2
// * Two Pointer's Solution
void sort01(vector<int> &v, int n)
{
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        if (v[i] == 0)
            i++;
        if (v[j] == 1)
            j--;
        if (i > j)
            break;
        if ((v[i] == 1) && (v[j] == 0))
        {
            v[i] = 0;
            v[j] = 1;
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
    sort01(v, n);
    cout << endl;

    cout << "Sorted Vector : ";
    display(v, n);

    return 0;
}

/*
    * Method - 1
    * Two Pass Solution

    void sort01(vector<int> &v, int n)
    {
        int noZ = 0;
        int noO = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                noZ++;
            else
                noO++;
        }

        for (int i = 0; i < n; i++)
        {
            if (i < noZ)
                v[i] = 0;


            //  else if (i < (noZ + noO))
            //     v[i] = Constant;


            else
                v[i] = 1;
        }
    }
*/