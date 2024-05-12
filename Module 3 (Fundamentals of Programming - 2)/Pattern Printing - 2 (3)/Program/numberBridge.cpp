#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Star Bridge
/*
1 2 3 4 5 6 7
1 2 3   5 6 7
1 2       6 7
1           7
*/

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    int m = n - 1;
    int nsp = 1;

    // For Upper Numbers
    for (int x = 1; x <= (2 * n) - 1; x++)
    {
        cout << x << " ";
    }
    cout << endl;

    for (int i = 1; i <= m; i++)
    {
        // For Numbers
        int a = 1;
        for (int j = 1; j <= (m + 1) - i; j++)
        {
            cout << a << " ";
            a++;
        }

        // For Spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout << " " << " ";
            a++;
        }
        nsp = nsp + 2;

        // For Numbers
        for (int l = 1; l <= (m + 1) - i; l++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }

    return 0;
}
