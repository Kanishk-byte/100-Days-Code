#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern
//          *
//        *   *
//      *       *
//    *           *
//      *       *
//        *   *
//          *

int main()
{

    int n;
    cout << "Enter the number of lines (half of the pattern): ";
    cin >> n;

    // Print the top half including the middle row
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces for the current row
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        // Print the first star
        cout << "*";

        // Print spaces between the stars, only if it's not the first row
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "  ";
            }

            // Print the second star
            cout << " *";
        }

        cout << endl;
    }

    // Print the bottom half (excluding the middle row)
    for (int i = n - 2; i >= 0; i--)
    {
        // Print leading spaces for the current row
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        // Print the first star
        cout << "*";

        // Print spaces between the stars, only if it's not the first row
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "  ";
            }

            // Print the second star
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}