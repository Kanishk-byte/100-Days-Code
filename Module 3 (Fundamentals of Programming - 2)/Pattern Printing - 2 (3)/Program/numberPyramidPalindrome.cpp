#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Number Pyramid Palindrome
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // For Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " " << " ";
        }

        // For Stars
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }

        // Third Loop
        for (int q = i - 1; q >= 1; q--)
        {
            cout << q << " ";
        }
        cout << endl;
    }

    return 0;
}