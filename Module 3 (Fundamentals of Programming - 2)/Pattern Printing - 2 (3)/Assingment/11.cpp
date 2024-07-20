#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern

// *  *  *  *  *  *  *
// *  *  *     *  *  *
// *  *           *  *
// *                 *
// *  *           *  *
// *  *  *     *  *  *
// *  *  *  *  *  *  *

int main()
{

    int n = 7; // The pattern seems fixed for n = 7

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1 || i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}