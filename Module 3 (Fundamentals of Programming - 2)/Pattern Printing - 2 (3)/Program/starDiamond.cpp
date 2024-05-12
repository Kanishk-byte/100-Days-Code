#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Star Diamond
//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    int nst = 1;       // * No of Stars
    int nsp = (n - 1); // * No of Spaces

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // For Spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout << " " << " ";
        }

        if (i <= (n - 1))
            nsp--;
        else
            nsp++;

        // For Stars
        for (int k = 1; k <= nst; k++)
        {
            cout << "*" << " ";
        }

        if (i <= (n - 1))
            nst += 2;
        else
            nst -= 2;

        cout << endl;
    }

    return 0;
}