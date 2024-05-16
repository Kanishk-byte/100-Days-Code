#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Pascal Triangle
//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1
// 1 5 10 10 5 1

int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{

    int row;
    cout << "No. of rows : ";
    cin >> row;

    for (int i = 0; i <= row; i++)
    {
        // * Numbers
        for (int j = 0; j <= i; j++)
        {

            int nfact = fact(i);
            int rfact = fact(j);
            int nrfact = fact(i - j);

            // * iCj
            int iCj = (nfact / (rfact * nrfact));
            cout << iCj << "  ";
        }
        cout << endl;
    }

    return 0;
}