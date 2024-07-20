#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern

// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

int main()
{

    int n = 4; // Number of rows

    for (int i = 0; i < n; i++)
    {
        // Print the increasing part
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }

        // Print the spaces
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "  ";
        }

        // Print the decreasing part, skip the last number if not the first row
        for (int j = n - i; j >= 1; j--)
        {
            if (j == n - i && i > 0)
            {
                continue;
            }
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}