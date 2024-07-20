#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    char startChar = 'A'; // Starting character

    for (int i = 0; i < n; i++)
    {
        // Print characters for the current row
        for (int j = 0; j < n - i; j++)
        {
            cout << (char)(startChar + j) << " ";
        }

        // Print spaces
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "  ";
        }

        // Print characters for the decreasing part, avoiding the center character on the first row
        for (int j = n - i; j > 0; j--)
        {
            if (i == 0 && j == 1)
                continue;
            cout << (char)(startChar + j - 1) << " ";
        }

        cout << endl;
    }

    return 0;
}