#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Solid Rectangle
/*
 * * * * *
 * * * * *
 * * * * *
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
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}