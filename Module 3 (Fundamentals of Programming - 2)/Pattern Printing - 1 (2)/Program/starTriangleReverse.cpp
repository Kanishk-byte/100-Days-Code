#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Star Triangle Reverse
/*
 * * * *
 * * *
 * *
 *
 */

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    // * Row no. (i) + No. of star = n + 1
    // * No. of star = n + 1 - i

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}