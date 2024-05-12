#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Star Pyramid
//       *
//     * * *
//   * * * * *
// * * * * * * *

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // For Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " " << " ";
        }

        // For Stars
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}