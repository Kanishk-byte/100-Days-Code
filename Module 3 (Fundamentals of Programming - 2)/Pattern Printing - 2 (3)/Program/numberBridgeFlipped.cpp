#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Number Triangle
/*
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1
*/

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // * Triangle
        {
            cout << j << " "; // * Number
        }

        // Print spaces
        for (int j = i; j < n; ++j)
        {
            cout << "    "; // four spaces for each space
        }

        // Print numbers
        for (int j = i; j >= 1; --j)
        {
            cout << j << " "; // print the number followed by a space
        }

        cout << endl;
    }

    return 0;
}