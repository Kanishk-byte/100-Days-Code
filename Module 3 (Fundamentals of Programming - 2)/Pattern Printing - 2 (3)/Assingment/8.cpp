#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern
//             1
//           2   2
//         3       3
//       4           4

int main()
{

    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces for the current row
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        // Print the first number
        cout << i;

        // Print spaces between the numbers, only if it's not the first row
        if (i > 1)
        {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++)
            {
                cout << "  ";
            }

            // Print the second number
            cout << " " << i;
        }

        cout << endl;
    }

    return 0;
}