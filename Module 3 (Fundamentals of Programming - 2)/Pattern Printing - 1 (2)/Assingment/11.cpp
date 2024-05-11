#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern.
//       *
//     * *
//   * * *
// * * * *
//   * * *
//     * *
//       *

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    // Print the upper half of the pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    // Print the lower half of the pattern
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << std::endl;
    }
    return 0;
}