#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern.
//       * * * *
//     * * * *
//   * * * *
// * * * *

int main()
{

    int n;
    cout<<"No. of lines : ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < n; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}