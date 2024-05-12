#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the following pattern
//       A
//     B A B
//   C B A B C
// D C B A B C D

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
        for (int k = i - 1; k >= 0; --k)
        {
            cout << (char)(k + 65) << " ";
        }

        // For Spaces
        for (int l = 1; l < i; ++l)
        {
            cout << (char)(l + 65) << " ";
        }

        cout << endl;
    }

    return 0;
}