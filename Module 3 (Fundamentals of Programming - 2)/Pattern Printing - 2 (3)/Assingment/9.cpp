#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern
//                 *
//              *  *  *
//           *     *     *
//        *        *        *
//     *           *           *
//  *  *  *  *  *  *  *  *  *  *  *
//     *           *           *
//        *        *        *
//           *     *     *
//              *  *  *
//                 *

int main()
{

    int n;
    cout << "Enter the number of lines (half of the pattern): ";
    cin >> n;

    // Print the top half including the middle row
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces for the current row
        for (int j = 0; j < 3 * (n - i - 1); j++)
        {
            cout << " ";
        }

        // Print the stars with spaces between them
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
            if (j < i)
            {
                for (int k = 0; k < 6 * (n - j - 1); k++)
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }

    // Print the middle line
    for (int i = 0; i < 6 * n - 1; i++)
    {
        if (i % 2 == 0)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;

    // Print the bottom half
    for (int i = n - 1; i >= 0; i--)
    {
        // Print leading spaces for the current row
        for (int j = 0; j < 3 * (n - i - 1); j++)
        {
            cout << " ";
        }

        // Print the stars with spaces between them
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
            if (j < i)
            {
                for (int k = 0; k < 6 * (n - j - 1); k++)
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}