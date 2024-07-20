#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern
//   *               *
//     *           *
//       *       *
//         *   *
//           *

int main()
{

    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print leading spaces for the current row
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }

        // Print the first star
        cout << "*";

        // Print spaces between the two stars, only if it's not the last row
        if (i != n - 1)
        {
            for (int j = 0; j < 2 * (n - i - 1) - 1; j++)
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