#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to print matrix in wave form.
// * -> -> ->
// * <- <-  |
// * |  -> ->

int main()
{

    int m;
    cout << "Enter no. of Row's : ";
    cin >> m;

    int n;
    cout << "Enter no. of Column's : ";
    cin >> n;

    int arr[m][n];

    // Taking Input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    // Wave Print
    cout << "Wave Print : " << endl;
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        { // (i % 2 != 0)
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}