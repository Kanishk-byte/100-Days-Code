#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Star Bridge
// * * * * * * *
// * * *   * * *
// * *       * *
// *           *

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    int m = n - 1;
    int nsp = 1;

    // For Upper Stars
    for (int x = 1; x <= (2 * n) - 1; x++)
    {
        cout << "*" << " ";
    }
    cout << endl;

    for (int i = 1; i <= m; i++)
    {
        // For Stars
        for (int j = 1; j <= (m + 1) - i; j++)
        {
            cout << "*" << " ";
        }

        // For Spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout << " " << " ";
        }
        nsp = nsp + 2;

        // For Stars
        for (int l = 1; l <= (m + 1) - i; l++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}
