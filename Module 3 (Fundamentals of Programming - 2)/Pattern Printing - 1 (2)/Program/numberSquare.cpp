#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Number Square
/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

int main()
{

    int n;
    cout << "No. of side : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}