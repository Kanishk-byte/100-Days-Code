#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern.
//        A
//      A B
//    A B C
//  A B C D

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // * For Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " " << " ";
        }

        // * For Stars
        for (int k = 1; k <= i; k++)
        {
            cout << (char)(k + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}