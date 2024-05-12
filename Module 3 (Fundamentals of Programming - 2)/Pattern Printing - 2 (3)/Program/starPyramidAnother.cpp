#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Star Pyramid
//       *
//     * * *
//   * * * * *
// * * * * * * *

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    int nst = 1;       // * No of Stars
    int nsp = (n - 1); // * No of Spaces

    for (int i = 1; i <= n; i++)
    {
        // For Spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout << " " << " ";
        }
        nsp--;

        // For Stars
        for (int k = 1; k <= nst; k++)
        {
            cout << "*" << " ";
        }
        nst += 2;
        cout << endl;
    }

    return 0;
}