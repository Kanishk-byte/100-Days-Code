#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Star Plus

//     *
//     *
// * * * * *
//     *
//     *

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    int mid = (n / 2) + 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == mid || j == mid)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    return 0;
}