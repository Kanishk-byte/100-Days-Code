#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern.
/*
1
1 2
1 2 3
1 2 3 4
*/

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // * Triangle
        {
            cout << j << " "; // * Number
        }
        cout << endl;
    }

    return 0;
}