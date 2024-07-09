#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to print the multiplication of two matrices given by the user.

int main()
{

    int m;
    cout << "Enter rows of matrix 1 : ";
    cin >> m;

    int n;
    cout << "Enter columns of matrix 1 : ";
    cin >> n;

    cout << endl;

    int p;
    cout << "Enter rows of matrix 2 : ";
    cin >> p;

    int q;
    cout << "Enter columns of matrix 2 : ";
    cin >> q;

    cout << endl;

    if (n == p)
    {
        // Taking Input (Matrix - 1)
        int arr[m][n];
        cout << "Enter elements of matrix 1 : " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        cout << endl;

        // Taking Input (Matrix - 2)
        int brr[p][q];
        cout << "Enter elements of matrix 2 : " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> brr[i][j];
            }
        }

        cout << endl;

        // Resultant matrix
        int res[m][q];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                // * res[i][j] = (arr[i][0] * brr[0][j]) + (a[i][1] * b[1][j]) + (. . . so + on);
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }

        cout << "Resultant Matrix is : " << endl;

        // Print
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    { // n != p
        cout << "The matrices cannot be multiplied.";
    }

    return 0;
}