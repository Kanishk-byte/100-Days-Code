#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern.
/*
 * * * * * *
 *         *
 *         *
 * * * * * *
 */

int main()
{

    int n;
    cout << "No. of Rows : ";
    cin >> n;

    int m;
    cout << "No. of Colums : ";
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m) {
                cout << "* ";
            } else {
                cout << "  "; // Print spaces for inner positions
            }
        }
        cout << endl;
    }

    return 0;
}