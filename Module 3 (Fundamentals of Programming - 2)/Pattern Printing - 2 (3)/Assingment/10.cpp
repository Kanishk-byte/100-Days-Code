#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern
// *                 *
// *  *           *  *
// *  *  *     *  *  *
// *  *  *  *  *  *  *
// *  *  *  *  *  *  *
// *  *  *     *  *  *
// *  *           *  *
// *                 *

int main()
{

    int n;
    cout << "Enter the number of lines (must be an odd number for symmetric pattern): ";
    cin >> n;

    // Ensure the input is valid and odd for symmetry
    if (n % 2 == 0)
    {
        cout << "Please enter an odd number for a symmetric pattern." << endl;
        return 1;
    }

    // Calculate the middle point
    int mid = n / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == mid || j == mid || i == j || i + j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}