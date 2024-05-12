#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the following pattern
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7

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

        // For Numbers
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}