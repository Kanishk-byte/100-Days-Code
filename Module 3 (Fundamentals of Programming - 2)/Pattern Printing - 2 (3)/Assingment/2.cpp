#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the following pattern
//       A
//     A B C
//   A B C D E
// A B C D E F G

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

        // For Alphabets
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << (char)(k + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}