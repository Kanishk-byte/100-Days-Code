#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Solid Square
/*
 * * * *
 * * * *
 * * * *
 * * * *
 */

int main()
{

    int n;
    cout << "No. of Side : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}