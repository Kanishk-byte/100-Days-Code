#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to print the transpose of the matrix entered by the user and store it in a new matrix.

int main()
{

    int m;
    cout << "Enter no. of Row's : ";
    cin >> m;

    int n;
    cout << "Enter no. of Column's : ";
    cin >> n;

    int arr[m][n];

    // * Input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    // * Print
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    /*
        * Print Transpose
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    */

    int transpose[n][m];

    // * Shifting
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }

    // * Print Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}